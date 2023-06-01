/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:14:51 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 14:27:52 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
    std::cout << "WrongCat constructor called!" << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(WrongCat const &other) {
    std::cout << "WrongCat copy constructor called!" << std::endl;
    *this = other;
}

WrongCat::~WrongCat() {}

WrongCat &WrongCat::operator=(WrongCat const &other) {
    std::cout << "WrongCat assignation operator called!" << std::endl;
    if (this != &other)
        this->_type = other._type;
    return (*this);
}

void WrongCat::makeSound() const {
    std::cout << "WrongMeow!" << std::endl;
}

std::string WrongCat::getType() const {
    return (this->_type);
}
