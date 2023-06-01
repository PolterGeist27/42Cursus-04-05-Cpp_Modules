/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 14:32:09 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 12:08:18 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
    
    protected:
        std::string _name;
        unsigned int _HP;
        unsigned int _EP;
        unsigned int _AD;
        static int const HP = 10;
	    static int const EP = 10;
	    static int const AD = 0;
    
    public:
        ClapTrap( std::string name );
        ClapTrap( ClapTrap& original );
        ~ClapTrap();
        ClapTrap &operator=( ClapTrap original );
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

};

#endif