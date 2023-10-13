/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 10:35:51 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/13 11:05:30 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base *generate(void) {

	Base *result;
	int num = std::rand() % 3;

	switch (num)
	{
	case 0:
		result = new A();
		std::cout << "generated an instace of A\n";
		break;

	case 1:
		result = new B();
		std::cout << "generated an instace of B\n";
		break;

	case 2:
		result = new C();
		std::cout << "generated an instace of C\n";
		break;
	
	default:
		result = NULL;
		break;
	}

	return (result);
}

void identify(Base *p) {
	if (dynamic_cast<A*>(p))
		std::cout << "Found A*\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Found B*\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Found C*\n";
	else
		std::cout << "Error" << std::endl;
}

void identify(Base& p) {
	try {
		dynamic_cast<A&>(p);
		std::cout << "Found A&\n";
		return;
	}
	catch (const std::exception& e) {}

	try {
		dynamic_cast<B&>(p);
		std::cout << "Found B&\n";
		return;
	}
	catch (const std::exception& e) {}

	try {
		dynamic_cast<C&>(p);
		std::cout << "Found C&\n";
		return;
	}
	catch (const std::exception& e) {
		std::cout << "Error" << std::endl;
	}
}