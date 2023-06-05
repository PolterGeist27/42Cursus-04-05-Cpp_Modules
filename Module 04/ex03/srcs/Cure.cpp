/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 14:33:45 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}

Cure::Cure(const Cure& original) : AMateria("cure") {}

Cure::~Cure() {}

Cure& Cure::operator=(const Cure& original) {
	return (*this);
}

void Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() <<" wounds *" << std::endl;
}

AMateria* Cure::clone() const {
	return (new Cure(*this));
}
