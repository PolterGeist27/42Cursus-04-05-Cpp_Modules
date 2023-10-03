/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/03 11:49:09 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Joe("Joe");
	ClapTrap John("John");

	std::cout << std::endl;
	Joe.attack("John");
	John.takeDamage(5);
	John.beRepaired(10);
	John.attack("Joe");
	Joe.takeDamage(15);

	std::cout << std::endl;
	ClapTrap copy(John);
	std::cout << std::endl;

	copy.attack("Joe");
	copy.takeDamage(0);
	copy.beRepaired(10);
	copy.attack("Joe");
	John.takeDamage(15);

	std::cout << std::endl;
	ClapTrap defaultTrap;
	std::cout << std::endl;    
	defaultTrap = John;

	John.takeDamage(15);
	John.takeDamage(15);
}