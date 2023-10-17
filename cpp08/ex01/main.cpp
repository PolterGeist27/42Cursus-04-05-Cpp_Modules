/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:10 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/17 15:25:52 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main(void) {
    std::srand(std::time(NULL));

    Span sp(10);

    sp.fill();
    sp.printVec();
    std::cout << sp.longestSpan() << std::endl;
    std::cout << sp.shortestSpan() << std::endl;
}