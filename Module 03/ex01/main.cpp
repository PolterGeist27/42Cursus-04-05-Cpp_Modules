/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 11:08:16 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ScavTrap scav("Robert");

	scav.attack("Paul");
	scav.guardGate();
	scav.beRepaired(50);
	scav.takeDamage(50);
	scav.beRepaired(50);

	ScavTrap copy(scav);

	copy.takeDamage(50);
	copy.beRepaired(50);

	copy = scav;

	copy.takeDamage(50); // should have 100HP left after this
}