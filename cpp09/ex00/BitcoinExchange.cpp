/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:58:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/11/08 12:27:23 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& original) {
    (void)original;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange& original) {
    (void)original;
    return (*this);
}

BitcoinExchange::BitcoinExchange(const std::string& file) : _file(file) {
    this->initializeDatabase();
}

BitcoinExchange::~BitcoinExchange() {}

void BitcoinExchange::initializeDatabase() {
    std::ifstream dataFile;
    std::string line;

    dataFile.open("data.csv");
    if (!dataFile.is_open())
        throw std::runtime_error("Error: couldn't open database file.");
    
    std::getline(dataFile, line);
    if (line != "date,exchange_rate")
        throw std::runtime_error("Error: invalid database file.");
    
    while (!dataFile.eof()) {
        std::getline(dataFile, line);
        std::string key = line.substr(0,10); // dates are always yyyy-mm-dd
        this->_database[key] = atof(line.substr(11).c_str()); // pos 10 is the comma the rest is the value
    }
    dataFile.close();
}

void BitcoinExchange::readInputFile() {
    std::ifstream inputFile;
    std::string line;

    inputFile.open(this->_file.c_str());
    if (!inputFile.is_open())
        throw std::runtime_error("Error: couldn't open input file.");
    
    std::getline(inputFile, line);
    
    while (!inputFile.eof()) {
        std::getline(inputFile, line);
        if (line.empty())
            continue;
        if (line == "date | value")
            continue;

        size_t pos = 0;
        pos = line.find('|', pos);
        
        if (pos == std::string::npos) {
            std::cerr << "Error: bad input => " << line << std::endl;
            continue;
        }
        
        std::string date = line.substr(0, pos - 1);
        if (!this->validateDate(date)) {
            std::cerr << "Error: bad input => " << date << std::endl;
            continue;
        }
        
        std::string value = line.substr(pos + 1);
        for (size_t i = 0; i < value.length(); i++) {
            if (!isdigit(value[i]) && value[i] != ' ' && value[i] != '.' && value[i] != '-') {
                std::cerr << "Error: value is not a number." << date << std::endl;
                continue;
            }
        }
        
        double num = std::strtod(value.c_str(), NULL);
        if (num < 0) {
            std::cerr << "Error: not a positive number." << std::endl;
            continue;
        }

        if (num > 1000) {
            std::cerr << "Error: too large a number." << std::endl;
            continue;
        }
        
        // All tests passed
        if (this->_database.find(date) != this->_database.end())
            std::cout << date << " => " << num << " = " << num * this->_database[date] << std::endl;
        else {
            // If the date is not in the database we should use the closest lower date
            std::string closest_date = this->_database.begin()->first;
            
            for (std::map<std::string, float>::iterator it = this->_database.begin(); it != this->_database.end(); it++) {
                // if the date of the current node is after the stored one but still earlier than the input date
                if (isDateEarlier((*it).first, date)) 
                    closest_date = (*it).first;
                if (!isDateEarlier((*it).first, date)) // only continue the loop while the stored variables are earlier than the input date
                    break;
            }
            float result = num * this->_database[closest_date];
            std::cout << date << " => " << num << " = " << result << std::endl;
        }
    }
}

bool BitcoinExchange::validateDate(const std::string& date) {
    
    if (date.length() != 10)
        return (false);
    
    std::string year = date.substr(0, 4); // year should be from index 0 to 3;
    std::string month = date.substr(5, 2); // index 4 is for hyphen and month is index 5 and 6 (so a lenght of 2 chars)
    std::string day = date.substr(8); // index 7 is for hyphen and the day should be index 8 and 9
    
    for (size_t i = 0; i < year.length(); i++) {
        if (!isdigit(year[i]))
            return (false);
    }

    for (size_t i = 0; i < month.length(); i++) {
        if (!isdigit(month[i]))
            return (false);
    }

    for (size_t i = 0; i < day.length(); i++) {
        if (!isdigit(day[i]))
            return (false);
    }
    
    int mvalue = atoi(month.c_str());
    int dvalue = atoi(day.c_str());

    if (mvalue < 1 || mvalue > 12)
        return (false);

    if (dvalue < 1 || dvalue > 31)
        return (false);

    return (true);
}

bool BitcoinExchange::isDateEarlier(const std::string& date1, const std::string& date2) {
    std::tm time1 = {};
    std::tm time2 = {};

    if (strptime(date1.c_str(), "%Y-%m-%d", &time1) == NULL ||
        strptime(date2.c_str(), "%Y-%m-%d", &time2) == NULL)
        return(false);
    
    return (std::mktime(&time1) < std::mktime(&time2)); // if true date1 is earlier than date 2
}
