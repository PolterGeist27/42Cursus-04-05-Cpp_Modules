/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:29:20 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:14:33 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap : public virtual ScavTrap, public virtual FragTrap {
    
    private:
        std::string _name;
    
    public:
        
        DiamondTrap( std::string name );
        ~DiamondTrap();

        using ScavTrap::attack;

        void whoAmI();
        unsigned int getHP();
        unsigned int getEP();
        unsigned int getAD();
};

#endif