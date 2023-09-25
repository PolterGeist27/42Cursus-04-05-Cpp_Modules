/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:17:01 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 12:09:08 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    std::cout << "ClapTrap turned into FragTrap!" << std::endl;
    this->_HP = 100;
    this->_EP = 100;
    this->_AD = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
    std::cout << "ClapTrap turned into FragTrap!" << std::endl;
    this->_HP = 100;
    this->_EP = 100;
    this->_AD = 30;
}

FragTrap::FragTrap( FragTrap& original ) : ClapTrap(original) {
    std::cout << "Copy of " << original._name << " FragTrap created!" << std::endl;
    this->_name = original._name;
    this->_HP = original._HP;
    this->_EP = original._EP;
    this->_AD = original._AD;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap turned back into ClapTrap!" << std::endl;
}

FragTrap &FragTrap::operator=( FragTrap original ) {
    std::cout << "Copy of " << original._name << " FragTrap created!" << std::endl;
    if (this != &original) {
        this->_name = original._name;
        this->_HP = original._HP;
        this->_EP = original._EP;
        this->_AD = original._AD;
    }
    return *this;
}

void FragTrap::highFivesGuys(void) {
    std::cout << this->_name << " is requesting positive high fives!" << std::endl;
}
