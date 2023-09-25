/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 11:10:50 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("Julian");

	frag.attack("Coconut");
	frag.beRepaired(50);
	frag.takeDamage(50);
	frag.highFivesGuys();

	FragTrap copy(frag);

	copy.takeDamage(50);
	copy.beRepaired(50);

	copy = frag;

	copy.takeDamage(50); // should have 50HP left after this
}