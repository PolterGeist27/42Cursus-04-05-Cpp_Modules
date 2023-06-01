/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:49:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 15:21:05 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called!" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(Dog const &other) {
    std::cout << "Dog copy constructor called!" << std::endl;
    *this = other;
}

Dog::~Dog() {
    std::cout << "Dog destructor called!" << std::endl;
    delete this->_brain;
}

Dog &Dog::operator=(Dog const &other) {
    std::cout << "Dog assignation operator called!" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}
