/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:14:51 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/22 16:14:51 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called!" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &original) : WrongAnimal(original) {
    std::cout << "WrongCat copy constructor called!" << std::endl;
    this->_type = original._type;
}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator=(WrongCat const &original) {
    std::cout << "WrongCat assignation operator called!" << std::endl;
    if (this != &original)
        this->_type = original._type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow!" << std::endl;
}

std::string WrongCat::getType() const {
    return (this->_type);
}
