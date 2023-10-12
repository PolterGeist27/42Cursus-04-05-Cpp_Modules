/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:30:38 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/12 11:02:23 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <cstdlib>

typedef enum
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	PSEUDO
}   t_type;

class ScalarConverter
{
    private:

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& original);
        ScalarConverter&    operator=(const ScalarConverter& original);
        ~ScalarConverter();

        bool isChar(const std::string& input);
        bool isInt(const std::string& input);
        bool isFloat(const std::string& input);
        bool isDouble(const std::string& input); 
        bool isPseudo(const std::string& input);

        void printInput(long double num, const std::string& input);
        void printChar(char c, const std::string& input);
        void printInt(int i, const std::string& input);
        void printFloat(float f, const std::string& input);
        void printDouble(double d, const std::string& input);
        void printPseudo(const std::string& input);

        bool check_overflow(const std::string &str, t_type type);

        void convert(const std::string& input);
};
