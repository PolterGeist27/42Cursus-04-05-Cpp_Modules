/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:26:10 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 14:29:22 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called!" << std::endl;
    this->_type = "";
}

WrongAnimal::WrongAnimal(WrongAnimal const &other) {
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
    *this = other;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &other) {
    std::cout << "WrongAnimal assignation operator called!" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void WrongAnimal::makeSound() const {
    std::cout << "WrongAnimal sound!" << std::endl;
}

std::string WrongAnimal::getType() const {
    return (this->_type);
}