/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 15:07:31 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/16 15:29:00 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void) {
	
	std::cout << "INT ARRAY" << std::endl;
	int iarray[] = {42, -42, 27, 345, -123456};
	::iter(iarray, 5, ::print);

	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "FLOAT ARRAY" << std::endl;
	float farray[] = {42.42, -42, 27.12, 34.5, -123.456, 0.98};
	::iter(farray, 6, ::print);

	std::cout << std::endl;
	std::cout << std::endl;
	
	std::cout << "CHAR ARRAY" << std::endl;
	char carray[] = {'a', 'b', '4', '2'};
	::iter(carray, 4, ::print);

	std::cout << std::endl;
	std::cout << std::endl;
	
}