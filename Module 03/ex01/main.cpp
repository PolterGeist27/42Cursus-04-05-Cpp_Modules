/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:06 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/30 15:17:45 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap Joe("Joe");
    ClapTrap John("John");

    Joe.attack("John");
    John.takeDamage(0);
    John.beRepaired(10);
    John.attack("Joe");
    Joe.takeDamage(15);
}