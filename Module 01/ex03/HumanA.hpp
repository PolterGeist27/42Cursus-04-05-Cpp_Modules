/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:12:22 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 14:02:37 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA {

    private:
        Weapon& _weapon;
        std::string _name;

    public:
        HumanA(std::string name, Weapon& Weapon);
        ~HumanA();
        void attack( void );
};

#endif