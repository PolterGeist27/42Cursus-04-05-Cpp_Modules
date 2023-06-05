/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:59:29 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 15:08:10 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ICE_HPP
# define ICE_HPP

# include "general.hpp"

class Ice : public AMateria {

	public:
		Ice();
        Ice(const Ice& original);
        virtual ~Ice();

        Ice &operator=(const Ice& original);
		
		void use(ICharacter& target);
		AMateria* clone() const;
	
};

#endif