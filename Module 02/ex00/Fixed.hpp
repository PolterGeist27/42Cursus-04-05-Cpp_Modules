/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:43:01 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/29 12:19:18 by diogmart         ###   ########.fr       */
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
        ~Fixed();
        Fixed( const Fixed& original );
        Fixed &operator=( const Fixed &original);
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif