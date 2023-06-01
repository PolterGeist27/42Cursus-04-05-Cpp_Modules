/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:22:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 10:04:55 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap {
    
    private:

    
    public:
        ScavTrap( std::string name );
        ScavTrap( ScavTrap& original );
        ~ScavTrap();
        ScavTrap &operator=( ScavTrap original );
        void attack(const std::string& target);
        void guardGate();
};

#endif