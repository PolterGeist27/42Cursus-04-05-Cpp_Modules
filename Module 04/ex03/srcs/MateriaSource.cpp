/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:17:23 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/06 11:00:00 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MAX_MATERIAS; i++) {
		this->materias[i] = NULL;
	}
}
    
MateriaSource::MateriaSource(const MateriaSource& original) {
    *this = original;
}
    
MateriaSource::~MateriaSource() {
    for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias[i])
			delete this->materias[i];
	}
}
    
MateriaSource& MateriaSource::operator=(const MateriaSource& original) {
    if (this != &original) {
		for (int i = 0; i < MAX_MATERIAS; i++) {
			if (this->materias[i])
				delete this->materias[i];
			this->materias[i] = original.materias[i]->clone(); // Should I clone here ?
		}
    }
    return (*this);
}
    
void MateriaSource::learnMateria(AMateria*) {}
    
AMateria* MateriaSource::createMateria(std::string const & type) {}
    