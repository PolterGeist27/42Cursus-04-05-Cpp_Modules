/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:22:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:08:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public virtual ClapTrap {
    
    protected:
        static int const HP = 100;
	    static int const EP = 50;
	    static int const AD = 20;
    
    public:
        ScavTrap( std::string name );
        ScavTrap( ScavTrap& original );
        ~ScavTrap();
        ScavTrap &operator=( ScavTrap original );
        void attack(const std::string& target);
        void guardGate();
};

#endif