/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:11 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/30 15:20:47 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( std::string name ) : _name(name) {
    _HP = 10;
    _EP = 10;
    _AD = 0;
    std::cout << "ClapTrap " << name << " created!" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap& original ) : _name(original._name) {
    std::cout << "Copy of " << original._name << " ClapTrap created!" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap " << this->_name << " destroyed!" << std::endl;
}

ClapTrap &ClapTrap::operator=( ClapTrap original ) {
    if (this != &original) {
        this->_name = original._name;
        this->_name = original._HP;
        this->_name = original._EP;
        this->_name = original._AD;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (this->_EP == 0 || this->_HP == 0) {
        std::cout << "ClapTrap " << this->_name << " can't attack!" << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->_name << " attacks " << target;
    std::cout << " causing " << this->_AD << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (this->_HP <= amount) {
        std::cout << "ClapTrap " << this->_name << " is bellow 0 HP! " << std::endl;
        return ;
    }
    this->_HP -= amount;
    std::cout << "ClapTrap " << this->_name << " was attacked ";
    std::cout << "and received " << amount << " points of damage!" << std::endl;
    std::cout << "It still has " << this->_HP << " hitpoints left!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_EP == 0 || this->_HP == 0) {
        std::cout << "ClapTrap " << this->_name << " can't repair itself!" << std::endl;
        return ;
    }
    this->_HP += amount;
    this->_EP--;
    std::cout << "ClapTrap " << this->_name << " repaired itself and gained " << amount << " hitpoints!" << std::endl;
}
