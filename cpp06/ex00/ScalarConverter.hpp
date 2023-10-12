/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:30:38 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/12 12:14:15 by diogmart         ###   ########.fr       */
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

        static bool isChar(const std::string& input);
        static bool isInt(const std::string& input);
        static bool isFloat(const std::string& input);
        static bool isDouble(const std::string& input); 
        static bool isPseudo(const std::string& input);

        static void printInput(long double num, const std::string& input);
        static void printChar(char c, const std::string& input);
        static void printInt(int i, const std::string& input);
        static void printFloat(float f, const std::string& input);
        static void printDouble(double d, const std::string& input);
        static void printPseudo(const std::string& input);

        static bool check_overflow(const std::string &str, t_type type);

        static void convert(const std::string& input);
};
