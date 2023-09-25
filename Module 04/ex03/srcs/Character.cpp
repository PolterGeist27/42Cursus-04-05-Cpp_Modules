/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:57:12 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 10:03:30 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character(std::string name) {
	this->_name = name;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		this->_inventory[i] = NULL;
	}
}

Character::Character(const Character& original) {
	*this = original;
}

Character::~Character() {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

Character& Character::operator=(const Character& original) {
	if (this != &original) {
        this->_name = original._name;
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = original._inventory[i]->clone();
		}
    }
	return (*this);
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (!this->_inventory[i]) {
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Character doesn't have space in inventory!" << std::endl;
}

void Character::unequip(int idx) {}

void Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}

		