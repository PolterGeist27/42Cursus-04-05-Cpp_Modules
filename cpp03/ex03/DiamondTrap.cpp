/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:29:13 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 12:10:11 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), ScavTrap(), FragTrap(), _name("Default") {
    std::cout << "DiamondTrap created!" << std::endl;
    this->_HP = FragTrap::HP;
    this->_EP = ScavTrap::EP;
    this->_AD = FragTrap::AD;
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
    std::cout << "DiamondTrap created!" << std::endl;
    this->_HP = FragTrap::HP;
    this->_EP = ScavTrap::EP;
    this->_AD = FragTrap::AD;
}

DiamondTrap::DiamondTrap( const DiamondTrap& original ) {
    std::cout << "Copy of " << original._name << " DiamondTrap created!" << std::endl;
    this->_name = original._name;
    this->_HP = original._HP;
    this->_EP = original._EP;
    this->_AD = original._AD;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap destroyed!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap& original ) {
    std::cout << "Copy of " << original._name << " DiamondTrap created!" << std::endl;
    if (this != &original) {
        this->_name = original._name;
        this->_HP = original._HP;
        this->_EP = original._EP;
        this->_AD = original._AD;
    }
    return *this;
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