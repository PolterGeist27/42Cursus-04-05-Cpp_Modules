/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 11:26:59 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Joe("Joe");
    ClapTrap John("John");

    Joe.attack("John");
    John.takeDamage(5);
    John.beRepaired(10);
    John.attack("Joe");
    Joe.takeDamage(15);

    ClapTrap copy(John);

    copy.attack("Joe");
    copy.takeDamage(0);
    copy.beRepaired(10);
    copy.attack("Joe");
    John.takeDamage(15);

    ClapTrap defaultTrap;
    
    defaultTrap = John;

    John.takeDamage(15);
    John.takeDamage(15);
}