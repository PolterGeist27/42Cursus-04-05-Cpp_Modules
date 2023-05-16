/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 12:04:41 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/16 13:44:10 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Utils.hpp"

std::string get_input(std::string prompt)
{
    std::string input;
    
    std::cout << prompt;
    std::cin >> input;
    return (input);
}