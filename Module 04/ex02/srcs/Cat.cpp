/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:49:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 12:46:57 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called!" << std::endl;
    this->_type = "Cat";
    this->_brain = new Brain();
}

Cat::Cat(Cat const &original) : AAnimal(original) {
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = original;
}

Cat::~Cat() {
    delete this->_brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &original) {
    std::cout << "Cat assignation operator called!" << std::endl;
    if (this != &original) {
        this->_type = original._type;
        delete this->_brain;
        this->_brain = new Brain(*original._brain);
    }
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain *Cat::getBrain() {
    return (this->_brain);
}
