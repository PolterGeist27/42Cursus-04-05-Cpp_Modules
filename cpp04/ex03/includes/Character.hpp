/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:57:02 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 13:41:52 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

# define INVENTORY_SIZE 4
# define FLOOR_SIZE 10

class Character : public ICharacter {
	
	public:
        Character();
		Character(std::string name);
        Character(const Character& original);
        virtual ~Character();
        Character& operator=(const Character& original);

        std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);

    private:
        std::string _name;
        AMateria *_inventory[INVENTORY_SIZE];
        AMateria *_floor[FLOOR_SIZE];
};

#endif
