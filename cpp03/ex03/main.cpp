/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:10:36 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("Ormunt");

	diamond.attack("Franklin");
	diamond.whoAmI();
	std::cout << "HP " << diamond.getHP() << std::endl;
	std::cout << "EP " << diamond.getEP() << std::endl;
	std::cout << "Attack " << diamond.getAD() << std::endl;
}