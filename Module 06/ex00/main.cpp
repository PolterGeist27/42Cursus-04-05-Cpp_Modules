/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:30:15 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/12 11:24:05 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2) {
		std::cerr << "Error: Wrong number of arguments" << std::endl;
		return (1);
	}
	
	ScalarConverter converter;

	converter.convert((std::string)argv[1]);
}