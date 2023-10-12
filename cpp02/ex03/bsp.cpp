/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 11:08:01 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/30 14:25:23 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

// y = mx + b
// m = (y2 - y1)/(x2 - x1)
// y - mx = b

Fixed get_slope( Point const a, Point const b ) {
    Fixed slope;

    // m = (y2 - y1)/(x2 - x1)
    slope = (b.getY() - a.getY())/(b.getX() - a.getX());
    return (slope);
}

Fixed get_b(Point const a, Fixed m) {
    Fixed b;

    b = a.getY() - (a.getX() * m);
    return (b);
}

bool is_in_line( Point const a, Point const b, Point const point ) {
    
    Fixed m = get_slope(a, b);
    Fixed B = get_b(a, m);
    // y = mx + b
    Fixed temp = (m * point.getX()) + B;
    if (temp > point.getY() || temp < point.getY())
        return false;
    else if (temp == point.getY())
        return true;
    else
        return false;
}

Fixed get_area( Point const a, Point const b, Point const c ) {
    
    Fixed a1 = a.getX() * b.getY() + b.getX() * c.getY() + c.getX() * a.getY();
    Fixed a2 = b.getX() * a.getY() + c.getX() * b.getY() + a.getX() * c.getY();

    Fixed area = std::abs(a1.toFloat() - a2.toFloat()) / 2;
    return area;
}

bool bsp( Point const a, Point const b, Point const c, Point const point) {
    
    if (is_in_line(a, b, point) || is_in_line(b, c, point) || is_in_line(c, a, point))
        return false;
    
    Fixed total_area = get_area(a, b, c);
    Fixed area_ABP = get_area(a, b , point);
    Fixed area_APC = get_area(a, point, c);
    Fixed area_PBC = get_area(point, b, c);

    Fixed sum_area = area_ABP + area_APC + area_PBC;
    if (sum_area != total_area)
       return false;
    return true;
}