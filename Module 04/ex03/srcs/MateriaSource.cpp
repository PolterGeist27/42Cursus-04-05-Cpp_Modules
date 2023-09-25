/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:17:23 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 13:59:44 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "general.hpp"

MateriaSource::MateriaSource() {
    for (int i = 0; i < MAX_MATERIAS; i++)
		this->materias[i] = NULL;
}
    
MateriaSource::MateriaSource(const MateriaSource& original) {
    for (int i = 0; i < MAX_MATERIAS; i++)
		this->materias[i] = original.materias[i]->clone();
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
			this->materias[i] = original.materias[i]->clone();
		}
    }
    return (*this);
}
    
void MateriaSource::learnMateria(AMateria* materia) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias[i] == NULL) {
			this->materias[i] = materia;
			std::cout << "Materia learned!" << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource is full!" << std::endl;
}
    
AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < MAX_MATERIAS; i++) {
		if (this->materias[i] && (this->materias[i]->getType() == type)) {
			std::cout << "Materia created!" << std::endl;
			return (this->materias[i]->clone());
		}
	}
	std::cout << "Materia not found!" << std::endl;
	return (NULL);
}
    