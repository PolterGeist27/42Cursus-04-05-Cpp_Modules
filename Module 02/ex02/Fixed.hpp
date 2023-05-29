/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:43:01 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/29 15:07:01 by diogmart         ###   ########.fr       */
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

        // ex02
        bool operator>( const Fixed &to_compare );
        bool operator<( const Fixed &to_compare );
        bool operator>=( const Fixed &to_compare );
        bool operator<=( const Fixed &to_compare );
        bool operator==( const Fixed &to_compare );
        bool operator!=( const Fixed &to_compare );

        Fixed &operator+( const Fixed &to_add );
        Fixed &operator-( const Fixed &to_subtract );
        Fixed &operator*( const Fixed &to_multiply );
        Fixed &operator/( const Fixed &to_divide );
        
        Fixed &operator++( void );
        Fixed operator++( int );
        Fixed &operator--( void );
        Fixed operator--( int );

        static Fixed& min( Fixed& nbr1, Fixed& nbr2 );
        static const Fixed& min( Fixed const& nbr1, Fixed const& nbr2 );
        static Fixed& max( Fixed& nbr1, Fixed& nbr2 );
        static const Fixed& max( Fixed const& nbr1, Fixed const& nbr2 );

};

std::ostream &operator<<( std::ostream &os, const Fixed &fixed);

#endif