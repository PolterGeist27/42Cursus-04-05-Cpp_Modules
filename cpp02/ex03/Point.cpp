/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:08:34 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/30 14:27:24 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point( float const x1, float const y1 ) : x(x1), y(y1) {}

Point::Point( const Point &original ) : x(original.getX()), y(original.getY()) {}

Point::~Point() {}

Point &Point::operator=( Point &original ) {
    if (this == &original)
		return (*this);
	(Fixed)this->x = original.getX();
	(Fixed)this->y = original.getY();
	return (*this);
}

bool Point::operator==( Point &to_compare ) {
    if (this->getX() == to_compare.getX() && this->getY() == to_compare.getY())
        return true;
    return false;
}

Fixed Point::getX() const {
    return this->x;
}

Fixed Point::getY() const {
    return this->y;
}

