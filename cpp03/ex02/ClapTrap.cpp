/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:11 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/03 11:56:02 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default") {
    _HP = 10;
    _EP = 10;
    _AD = 0;
    std::cout << "ClapTrap " << this->_name << " created!" << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : _name(name) {
    _HP = 10;
    _EP = 10;
    _AD = 0;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap( const ClapTrap& original ) {
    this->_name = original._name;
    this->_HP = original._HP;
    this->_EP = original._EP;
    this->_AD = original._AD;
    std::cout << "Copy of " << original._name << " ClapTrap created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& original) {
    if (this != &original) {
        this->_name = original._name;
        this->_HP = original._HP;
        this->_EP = original._EP;
        this->_AD = original._AD;
        std::cout << "Assignment copy of " << original._name << " ClapTrap created!" << std::endl;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_EP == 0 || this->_HP == 0) {
        std::cout << this->_name << " can't attack!" << std::endl;
        return ;
    }
    this->_EP--;
    std::cout << this->_name << " attacks " << target;
    std::cout << " causing " << this->_AD << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_HP <= amount) {
        std::cout << this->_name << " is bellow 0 HP! " << std::endl;
        this->_HP = 0;
        return ;
    }
    this->_HP -= amount;
    std::cout << this->_name << " was attacked ";
    std::cout << "and received " << amount << " points of damage!" << std::endl;
    std::cout << "It still has " << this->_HP << " hitpoints left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_EP == 0 || this->_HP == 0) {
        std::cout << this->_name << " can't repair itself!" << std::endl;
        return ;
    }
    this->_HP += amount;
    this->_EP--;
    std::cout << this->_name << " repaired itself and gained " << amount << " hitpoints!" << std::endl;
}
