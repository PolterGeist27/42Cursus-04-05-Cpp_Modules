/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:49:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/22 16:14:23 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called!" << std::endl;
    this->_type = "Dog";
}

Dog::Dog(Dog const &original) : Animal(original) {
    std::cout << "Dog copy constructor called!" << std::endl;
    this->_type = original._type;
}

Dog::~Dog() {
    std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator=(Dog const &original) {
    std::cout << "Dog assignation operator called!" << std::endl;
    if (this != &original)
        this->_type = original._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
