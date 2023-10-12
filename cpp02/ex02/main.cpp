/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 11:43:13 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/30 11:02:58 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

void arithmetic_operators(void)
{
    Fixed a;
    const Fixed b(Fixed(5.05f) * Fixed(2));
    const Fixed c(Fixed(5.05f) + Fixed(2));
    const Fixed d(Fixed(5.05f) - Fixed(2));
    const Fixed e(Fixed(5.05f) / Fixed(2));
    std::cout << "==========*Arithmetic operators*==========" << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "d = " << d << std::endl;
    std::cout << "e = " << e << std::endl;
}

void compare_operators(void)
{
    Fixed a(10);
    const Fixed b(11);
    std::cout << std::endl
              << "==========*Compare operators*==========" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    if (a > b)
        std::cout << "a is greater than b" << std::endl;
    if (a >= b)
        std::cout << "a is greater or equal to b" << std::endl;
    if (a < b)
        std::cout << "a is less than b" << std::endl;
    if (a <= b)
        std::cout << "a is less or equal to b" << std::endl;
    if (a == b)
        std::cout << "a is equal to b" << std::endl;
    if (a != b)
        std::cout << "a is different than b" << std::endl;
}

void increment_operators(void)
{
    Fixed a(10);
    Fixed b(10);
    std::cout << std::endl
              << "==========*Compare operators*==========" << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "++a = " << ++a << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "a++ = " << a++ << std::endl;
    std::cout << "a = " << a << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "--b = " << --b << std::endl;
    std::cout << "b = " << b << std::endl;
    std::cout << "b-- = " << b-- << std::endl;
    std::cout << "b = " << b << std::endl;
}

void min_max_operators(void)
{
    Fixed a(10);
    Fixed b(11);
    Fixed const c(10);
    Fixed const d(20);
    std::cout << std::endl
              << "==========*Min/Max operators*==========" << std::endl;
    std::cout << Fixed::max(a, b) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << Fixed::max(c, d) << std::endl;
    std::cout << Fixed::min(c, d) << std::endl;
}

int main(void)
{
    arithmetic_operators();
    compare_operators();
    increment_operators();
    min_max_operators();
    return (0);
}
