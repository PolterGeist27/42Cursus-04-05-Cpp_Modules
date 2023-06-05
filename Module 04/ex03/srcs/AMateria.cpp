/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:53:16 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 14:33:56 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& original) {
	
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& original) {
    return (*this);
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	
}