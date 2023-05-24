/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:16:22 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 14:02:43 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon& weapon ) : _weapon(weapon), _name(name) {}

HumanA::~HumanA() {}

void HumanA::attack( void ) {
    std::cout << this->_name << " attacks with their " << this->_weapon.getType() << std::endl;
}

