/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:00:17 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 11:33:47 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal() {
    std::cout << "Animal constructor called!" << std::endl;
    this->_type = "";
}

AAnimal::AAnimal(AAnimal const &original) {
    std::cout << "Animal copy constructor called!" << std::endl;
    this->_type = original._type;
}

AAnimal::~AAnimal() {
    std::cout << "Animal destructor called!" << std::endl;
}

AAnimal &AAnimal::operator=(AAnimal const &original) {
    std::cout << "Animal assignation operator called!" << std::endl;
    if (this != &original)
        this->_type = original._type;
    return (*this);
}

std::string AAnimal::getType() {
    return this->_type;
}
