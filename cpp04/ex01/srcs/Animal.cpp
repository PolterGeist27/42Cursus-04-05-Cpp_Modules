/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:00:17 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 10:37:24 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called!" << std::endl;
    this->_type = "";
}

Animal::Animal(Animal const &original) {
    std::cout << "Animal copy constructor called!" << std::endl;
    *this = original;
}

Animal::~Animal() {
    std::cout << "Animal destructor called!" << std::endl;
}

Animal &Animal::operator=(Animal const &original) {
    std::cout << "Animal assignation operator called!" << std::endl;
    if (this != &original)
        this->_type = original._type;
    return (*this);
}

void Animal::makeSound() const {
    std::cout << "Animal sound!" << std::endl;
}

std::string Animal::getType() const {
    return (this->_type);
}
