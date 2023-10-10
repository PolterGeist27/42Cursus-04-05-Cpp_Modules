/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:30:43 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 16:38:53 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter () {}

ScalarConverter::ScalarConverter (const ScalarConverter& original) {
    //copy
}

ScalarConverter::~ScalarConverter () {}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter& original) {
    if (this != &original)
       ;
    return (*this);
}

bool ScalarConverter::isChar(std::string& input) {
    if (input.length() != 1)
        return (false);
    if (input[0] >= '0' && input[0] <= '9')
        return (false);
    if (input[0] >= 32 && input[0] < 127)
        return (true);
    return (false);
}

bool ScalarConverter::isInt(std::string& input) {

    for (size_t i = 0; i < input.length(); i++) {
        if (i == 0 && input[i] == '-')
            continue;
        if (!isdigit(input[i]))
            return (false);
    }
    long num = atol(input.c_str());
    if (num < std::numeric_limits<int>::min() || num > std::numeric_limits<int>::max())
        return (false);
    return (true);
}

bool ScalarConverter::isFloat(std::string& input) {
    if (input[input.length() - 1] != 'f')
        return (false);
    if (input.find_first_of('.') != input.find_last_of('.') || input.find('.') == std::string::npos)
        return (false);

    for (size_t i = 0; (i < input.length() - 1); i++) {
		if (i == 0 && input[i] == '-')
			continue;
		if (input[i] == '.')
			continue;
		if (!isdigit(input[i]))
			return (false);
	}

    double num = strtod(input.c_str(), NULL);
    if (num < std::numeric_limits<long>::min() || num > std::numeric_limits<long>::max())
		return (false);
    return (true);
}

bool ScalarConverter::isDouble(std::string& input) {
    if (input.find_first_of('.') != input.find_last_of('.') || input.find('.') == std::string::npos)
        return (false);

    for (size_t i = 0; (i < input.length() - 1); i++) {
		if (i == 0 && input[i] == '-')
			continue;
		if (input[i] == '.') {
            if (!isdigit(input[i + 1]) && !isdigit(input[i - 1]))
                return (false);
		    continue;
        }
		if (!isdigit(input[i]))
			return (false);
	}
    // check for overflows ?
}

bool ScalarConverter::isPseudo(std::string& input) {
    if (input == "-inff" || input == "+inff" || input == "nanf" ||
        input == "-inf" || input == "+inf" || input == "nan")
        return (true);
    return (false);
}

void ScalarConverter::convert(std::string& input) {
    if (isChar(input))
        ; // do stuff
    if (isInt(input))
        ; // do stuff
    if (isFloat(input))
        ; // do stuff
    if (isDouble(input))
        ; // do stuff
    if (isPseudo(input))
        ; // do stuff
}

