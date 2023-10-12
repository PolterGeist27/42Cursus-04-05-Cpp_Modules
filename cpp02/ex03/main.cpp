/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:43:13 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:26:13 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

int main(void)
{
    Point const a(0, 1);
    Point const b(2, 1);
    Point const c(1, 3);
    Point const d(1, 2);
    
    if (bsp(a, b, c, d))
        std::cout << "The point is inside the triangle" << std::endl;
    else
        std::cout << "The point is outside the triangle" << std::endl;
    return (0);
}
