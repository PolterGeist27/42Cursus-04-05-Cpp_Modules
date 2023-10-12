/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:43:10 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/29 14:31:32 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed( const Fixed &original) {
    std::cout << "Copy constructor called" << std::endl;
    this->_value = original.getRawBits();
}

Fixed &Fixed::operator=( const Fixed &original ) {
    std::cout << "Copy assignment operator called" << std::endl;
    this->_value = original.getRawBits();
    return (*this);
}

int Fixed::getRawBits( void ) const {
    std::cout << "getRawBits member function called" << std::endl;
    return (this->_value);
}

void Fixed::setRawBits( int const raw ) {
    this->_value = raw;
}

// ex01

Fixed::Fixed( const int ivalue ) {
    this->_value = ivalue * (1 << this->_bits);
}

Fixed::Fixed( const float fvalue ) { 
    this->_value = fvalue * (1 << this->_bits);
}

std::ostream &operator<<( std::ostream &os, const Fixed &fixed) {
    os << fixed.toFloat();
    return (os);
}

float Fixed::toFloat( void ) const {
    return (static_cast<float>(this->_value) / static_cast<float>(1 << this->_bits));
}

int Fixed::toInt( void ) const {
    return (this->_value / (1 << this->_bits));
}
