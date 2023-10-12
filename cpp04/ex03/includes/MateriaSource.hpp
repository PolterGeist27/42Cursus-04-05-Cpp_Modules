/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:08:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 13:43:44 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

# define MAX_MATERIAS 4

class MateriaSource : public IMateriaSource {
	
    public:
        MateriaSource();
        MateriaSource(const MateriaSource& original);
		~MateriaSource();

        MateriaSource& operator=(const MateriaSource& original);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

    private:
        AMateria *materias[MAX_MATERIAS];
};

#endif