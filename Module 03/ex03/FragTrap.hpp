/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:16:58 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/25 11:16:04 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap {
    
    protected:
        static int const HP = 100;
	    static int const EP = 100;
	    static int const AD = 30;
    
    public:
        FragTrap();
        FragTrap( std::string name );
        FragTrap( FragTrap& original );
        ~FragTrap();
        FragTrap &operator=( FragTrap original );
        void highFivesGuys(void);
        
};

#endif