/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:58:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/24 12:24:45 by diogmart         ###   ########.fr       */
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
    
    while (true) {
        std::getline(dataFile, line);
        if (dataFile.eof())
            break;
        std::string key = line.substr(0,9); // dates are always yyyy-mm-dd
        this->_database[key] = std::stof(line.substr(11)); // pos 10 is the comma the rest is the value
    }
    dataFile.close();
}

void BitcoinExchange::readInputFile() {
    std::ifstream inputFile;
    std::string line;

    inputFile.open(this->_file.c_str());
    if (!inputFile.is_open())
        throw std::runtime_error("Error: couldn't open input file.");
}

bool BitcoinExchange::validateDate(const std::string& date) {
    
    if (date.length() != 10)
        return (false);
    
    std::string year = date.substr(0, 3); // year should be from index 0 to 3;
    std::string month = date.substr(5, 6); // index 4 is for hyphen and month is index 5 and 6
    std::string day = date.substr(8); // index 7 is for hyphen and the day should be index 8 and 9

    for (int i = 0; i < year.length(); i++) {
        if (!isdigit(year[i]))
            return (false);
    }

    for (int i = 0; i < month.length(); i++) {
        if (!isdigit(month[i]))
            return (false);
    }

    for (int i = 0; i < day.length(); i++) {
        if (!isdigit(day[i]))
            return (false);
    }
    
    int mvalue = atoi(month.c_str());
    int dvalue = atoi(day.c_str());

    if (mvalue < 1 || mvalue > 12)
        return (false);
    if (mvalue < 10 && month[0] != '0')
        return (false);

    if (dvalue < 1 || dvalue > 31)
        return (false);
    if (dvalue < 10 && day[0] != '0')
        return (false);
}
