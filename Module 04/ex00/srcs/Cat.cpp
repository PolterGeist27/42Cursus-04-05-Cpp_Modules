/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:49:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 14:25:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
    std::cout << "Cat constructor called!" << std::endl;
    this->_type = "Cat";
}

Cat::Cat(Cat const &other) {
    std::cout << "Cat copy constructor called!" << std::endl;
    *this = other;
}

Cat::~Cat() {
    std::cout << "Cat destructor called!" << std::endl;
}

Cat &Cat::operator=(Cat const &other) {
    std::cout << "Cat assignation operator called!" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}
