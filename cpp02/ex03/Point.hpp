/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:08:37 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/30 14:21:10 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"
# include <cmath>

class Point {
    
    public:
        Point();
        Point( float const x1, float const y1 );
        Point( const Point& original );
        ~Point();
        Point &operator=( Point &original );
        bool operator==( Point &to_compare );

        Fixed getX() const;
        Fixed getY() const;


    private:
        Fixed const x;
        Fixed const y;
};

bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif