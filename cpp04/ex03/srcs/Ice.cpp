/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:37 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 14:00:54 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}

Ice::Ice(const Ice& original) : AMateria(original.type) {}

Ice::~Ice() {}

Ice& Ice::operator=(const Ice& original) {
	(void)original;
	return (*this);
}

void Ice::use(ICharacter& target) {
	std::cout << "* shoots an ice bolt at " << target.getName() <<" *" << std::endl;
}

AMateria* Ice::clone() const {
	return (new Ice(*this));
}
