/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:27 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 13:42:04 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {
	
	public:
        Cure();
        Cure(const Cure& original);
        virtual ~Cure();

        Cure &operator=(const Cure& original);

		virtual void use(ICharacter& target);
        AMateria* clone() const;

};

#endif