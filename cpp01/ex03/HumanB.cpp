/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:36:47 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 14:06:31 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name ) {
    this->_weapon = NULL;
    this->_name = name;
}

HumanB::~HumanB() {}

void HumanB::attack( void ) {

    if (this->_weapon == NULL) {
        std::cout << this->_name << " doesn't have a weapon!" << std::endl;
        return ;
    }

    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void HumanB::setWeapon( Weapon& weapon ) {
    this->_weapon = &weapon;
}
