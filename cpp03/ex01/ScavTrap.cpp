/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:22:21 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/03 11:55:58 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    std::cout << "ClapTrap turned into ScavTrap!" << std::endl;
    this->_HP = 100;
    this->_EP = 50;
    this->_AD = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name) {
    std::cout << "ClapTrap turned into ScavTrap!" << std::endl;
    this->_HP = 100;
    this->_EP = 50;
    this->_AD = 20;
}

ScavTrap::ScavTrap( const ScavTrap& original ) : ClapTrap(original) {
    this->_HP = original._HP;
    this->_EP = original._EP;
    this->_AD = original._AD;
    std::cout << "Copy of " << original._name << " ScavTrap created!" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap turned back into ClapTrap!" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap& original ) {
    if (this != &original) {
        this->_name = original._name;
        this->_HP = original._HP;
        this->_EP = original._EP;
        this->_AD = original._AD;
        std::cout << "Assignment copy of " << original._name << " ScavTrap created!" << std::endl;
    }
    return *this;
}

void ScavTrap::attack(const std::string& target) {
    if (this->_EP == 0 || this->_HP == 0) {
        std::cout << "ScavTrap " << this->_name << " can't attack!" << std::endl;
        return ;
    }
    this->_EP--;
    std::cout << "ScavTrap " << this->_name << " attacks " << target;
    std::cout << " causing " << this->_AD << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}
