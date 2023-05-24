/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:12:20 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 14:06:12 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB {

    private:
        Weapon *_weapon;
        std::string _name;

    public:
        HumanB( std::string name );
        ~HumanB();
        void setWeapon( Weapon& weapon);
        void attack( void );
};

#endif