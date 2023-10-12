/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:53:16 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 12:48:54 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {
	this->type = "default";
}

AMateria::AMateria(std::string const & type) {
	this->type = type;
}

AMateria::AMateria(const AMateria& original) {
	this->type = original.type;
}

AMateria::~AMateria() {}

AMateria& AMateria::operator=(const AMateria& original) {
	this->type = original.type;
    return (*this);
}

std::string const & AMateria::getType() const {
	return this->type;
}

void AMateria::use(ICharacter& target) {
	(void)target;
}