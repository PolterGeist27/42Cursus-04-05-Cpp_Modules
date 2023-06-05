/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:49:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 15:15:56 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called!" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const &original) : Animal(original) {
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = original;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

Cat &Cat::operator=(Cat const &original) {
    std::cout << "Cat assignation operator called!" << std::endl;
    if (this != &original)
        this->_type = original._type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
