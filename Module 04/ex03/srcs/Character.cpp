/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:57:12 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 13:44:35 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::Character() : _name("Default"){
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;

	for (int i = 0; i < FLOOR_SIZE; i++)
		this->_floor[i] = NULL;
}

Character::Character(std::string name) : _name(name) {
	for (int i = 0; i < INVENTORY_SIZE; i++)
		this->_inventory[i] = NULL;

	for (int i = 0; i < FLOOR_SIZE; i++)
		this->_floor[i] = NULL;
}

Character::Character(const Character& original) {
	this->_name = original._name;
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
		this->_inventory[i] = original._inventory[i];
	}
	for (int i = 0; i < FLOOR_SIZE; i++) {
		if (this->_floor[i])
			delete this->_floor[i];
		this->_floor[i] = original._floor[i];
	}
}

Character::~Character() {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
	for (int i = 0; i < FLOOR_SIZE; i++) {
		if (this->_floor[i])
			delete this->_floor[i];
	}
	std::cout << this->_name << " died!" << std::endl;
}

Character& Character::operator=(const Character& original) {
	if (this != &original) {
        this->_name = original._name;
		for (int i = 0; i < INVENTORY_SIZE; i++) {
			if (this->_inventory[i])
				delete this->_inventory[i];
			this->_inventory[i] = original._inventory[i];
		}
		for (int i = 0; i < FLOOR_SIZE; i++) {
		if (this->_floor[i])
			delete this->_floor[i];
		this->_floor[i] = original._floor[i];
		}
    }
	return (*this);
}

std::string const & Character::getName() const {
	return this->_name;
}

void Character::equip(AMateria* m) {
	for (int i = 0; i < INVENTORY_SIZE; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			return;
		}
	}
	std::cout << "Character doesn't have space in inventory!" << std::endl;
}

void Character::unequip(int idx) {
	if (idx < 0 || idx >= INVENTORY_SIZE) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}
	for (int i = 0; i < FLOOR_SIZE; i++) {
		if (this->_floor[i] == NULL) {
			this->_floor[i] = this->_inventory[idx];
			this->_inventory[idx] = NULL;
		}
	}
}

void Character::use(int idx, ICharacter& target) {
	if (this->_inventory[idx])
		this->_inventory[idx]->use(target);
}
