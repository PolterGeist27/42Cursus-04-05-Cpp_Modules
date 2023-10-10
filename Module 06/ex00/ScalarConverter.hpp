/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:30:38 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/10 16:23:34 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <limits>
#include <cstdlib>

class ScalarConverter
{
    private:

    public:
        ScalarConverter();
        ScalarConverter(const ScalarConverter& original);
        ScalarConverter&    operator=(const ScalarConverter& original);
        ~ScalarConverter();

        bool isChar(std::string& input);
        bool isInt(std::string& input);
        bool isFloat(std::string& input);
        bool isDouble(std::string& input);
        
        bool isPseudo(std::string& input);

        void convert(std::string& input);
};
