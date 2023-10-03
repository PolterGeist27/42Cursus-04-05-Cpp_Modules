/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/03 11:51:50 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Julian");

	std::cout << std::endl;
	frag.attack("Coconut");
	frag.beRepaired(50);
	frag.takeDamage(50);
	frag.highFivesGuys();

	std::cout << std::endl;
	FragTrap copy(frag);
	std::cout << std::endl;

	copy.takeDamage(50);
	copy.beRepaired(50);

	copy = frag;

	copy.takeDamage(50); // should have 50HP left after this
}