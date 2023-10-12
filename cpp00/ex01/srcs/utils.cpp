/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:04:41 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/17 15:12:47 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

using std::string;

string get_input(string prompt)
{
    string input;
    
    do {
        std::cout << prompt;
        if (!getline(std::cin, input))
            exit(0);
    } while (input.empty());
    return (input);
}

string format_string(string str)
{
    if (str.length() >= 10) {
        string formatted;
        
        formatted = str.substr(0, 9);
        formatted.append(".");
        return (formatted);
    }
    else
        return (str);
}

bool is_number(string str)
{
    for (size_t i = 0; i < str.length(); i++) {
        if (!isdigit(str[i]))
            return false;
    }
    return true;
}
