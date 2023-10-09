/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 16:06:37 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/09 10:58:43 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    Bureaucrat test;
    Bureaucrat Costa("Costa", 150);
    Bureaucrat Antonio(Costa);
    Bureaucrat Marcelo("Marcelo", 100);

    std::cout << test << std::endl;
    std::cout << Costa << std::endl;
    std::cout << Antonio << std::endl;
    std::cout << Marcelo << std::endl;
    std::cout << std::endl;
    
    test = Marcelo;

    std::cout << test << std::endl;

    Marcelo.incrementGrade();

    std::cout << test << std::endl;
    std::cout << Marcelo << std::endl;

    std::cout << std::endl;
    std::cout << std::endl;
    std::cout << "test exceptions" << std::endl;
    std::cout << std::endl;
    std::cout << std::endl;

    try {
        Bureaucrat Wrong("wrong", 300);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

	std::cout << Costa << std::endl;

	try {
		Costa.decrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

	std::cout << std::endl;
	std::cout << std::endl;

	try {
        Bureaucrat Wrong2("wrong2", 0);
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }


	Marcelo.setGrade(1);
	std::cout << Marcelo << std::endl;

	try {
        Marcelo.incrementGrade();
    }
    catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "test increments" << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;

	Bureaucrat bur1("One", 1);
	Bureaucrat bur2("Two", 150);
	Bureaucrat bur3("Three", 5);
	Bureaucrat bur4("Four", 125);

	std::cout << bur1 << std::endl;
	std::cout << bur2 << std::endl;
	std::cout << bur3 << std::endl;
	std::cout << bur4 << std::endl;
	std::cout << std::endl;
	bur1.decrementGrade();
	bur2.incrementGrade();
	bur3.incrementGrade();
	bur4.decrementGrade();
	std::cout << std::endl;
	std::cout << bur1 << std::endl;
	std::cout << bur2 << std::endl;
	std::cout << bur3 << std::endl;
	std::cout << bur4 << std::endl;
}
