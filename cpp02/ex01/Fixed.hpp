/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:43:01 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/29 14:14:16 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
    
    private:
        int _value;
        static const int _bits = 8;

    public:
        Fixed();
        Fixed( const Fixed& original );

        Fixed( const int ivalue ); // ex01
        Fixed( const float fvalue ); // ex01

        ~Fixed();
        Fixed &operator=( const Fixed &original);

        int getRawBits( void ) const;
        void setRawBits( int const raw );
    
        float toFloat( void ) const; // ex01
        int toInt( void ) const; // ex01
};

std::ostream &operator<<( std::ostream &os, const Fixed &fixed);

#endif