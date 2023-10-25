/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:58:17 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/25 11:02:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <fstream>
#include <exception>
#include <string>
#include <ctime>
#include <cstdlib>



class BitcoinExchange
{
    private:
        std::map<std::string, float> _database;
        std::string _file;
        
        void initializeDatabase();

        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& original);
        BitcoinExchange&    operator=(const BitcoinExchange& original);

    public:
        BitcoinExchange(const std::string& file);
        ~BitcoinExchange();

        void readInputFile();
        bool validateDate(const std::string& date);

        bool isDateEarlier(const std::string& date1, const std::string& date2);
};
