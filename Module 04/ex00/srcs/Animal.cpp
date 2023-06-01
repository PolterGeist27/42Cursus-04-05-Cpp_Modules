/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:00:17 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 14:29:06 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called!" << std::endl;
    this->_type = "";
}

Animal::Animal(Animal const &other) {
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = other;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

Animal &Animal::operator=(Animal const &other) {
    std::cout << "Animal assignation operator called!" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const {
    return (this->_type);
}
