/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:29:13 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:14:22 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    std::cout << "DiamondTrap created!" << std::endl;
    this->_HP = FragTrap::HP;
    this->_EP = ScavTrap::EP;
    this->_AD = FragTrap::AD;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destroyed!" << std::endl;
}

void DiamondTrap::whoAmI() {
    std::cout << "Diamond Trap name : " << this->_name << std::endl;
    std::cout << "ClapTrap name : " <<  ClapTrap::_name << std::endl;
}

unsigned int DiamondTrap::getEP() {
    return this->_EP;
}

unsigned int DiamondTrap::getHP() {
    return this->_HP;
}

unsigned int DiamondTrap::getAD() { 
    return this->_AD;
}