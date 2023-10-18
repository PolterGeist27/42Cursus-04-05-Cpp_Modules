/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:10 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/18 11:09:43 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int main(void) {
    std::srand(std::time(NULL));

    Span sp(10);

    sp.fill();
    sp.printVec();
    std::cout << "Longest span: " << sp.longestSpan() << std::endl;
    std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;

    Span GreatPesonality(1);

    GreatPesonality.addNumber(42);

    try {
        GreatPesonality.shortestSpan();
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "10 000 numbers" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Span sp1(10000);

    sp1.fill();
    //sp1.printVec();
    std::cout << "Longest span: " << sp1.longestSpan() << std::endl;
    std::cout << "Shortest span: " << sp1.shortestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "50 000 numbers" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Span sp2(50000);

    sp2.fill();
    //sp2.printVec();
    std::cout << "Longest span: " << sp2.longestSpan() << std::endl;
    std::cout << "(this can take a while)" << std::endl;
    std::cout << "Shortest span: " << sp2.shortestSpan() << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "5 000 numbers" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    Span sp3(5000);

    sp3.fill();
    //sp3.printVec();
    std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
    std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
}
