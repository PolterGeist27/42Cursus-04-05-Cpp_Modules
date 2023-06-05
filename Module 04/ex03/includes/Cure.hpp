/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:27 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 15:07:18 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CURE_HPP
# define CURE_HPP

# include "general.hpp"

class Cure : public AMateria {
	
	public:
        Cure();
        Cure(const Cure& original);
        virtual ~Cure();

        Cure &operator=(const Cure& original);

		void use(ICharacter& target);
        AMateria* clone() const;

};

#endif