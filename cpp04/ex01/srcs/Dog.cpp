/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:49:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/22 15:55:59 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Brain.hpp"

Dog::Dog() {
    std::cout << "Dog constructor called!" << std::endl;
    this->_type = "Dog";
    this->_brain = new Brain();
}

Dog::Dog(const Dog &original) : Animal (original) {
    std::cout << "Dog copy constructor called!" << std::endl;
    this->_type = original._type;
    this->_brain = new Brain(*original._brain);
}

Dog::~Dog() {
    delete this->_brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog &Dog::operator=(Dog const &original) {
    std::cout << "Dog assignation operator called!" << std::endl;
    if (this != &original) {
        this->_type = original._type;
        if (this->_brain)
            delete this->_brain;
        this->_brain = new Brain(*original._brain);
    }
    return (*this);
}

void Dog::makeSound() const {
    std::cout << "Woof!" << std::endl;
}

Brain *Dog::getBrain() {
    return (this->_brain);
}
