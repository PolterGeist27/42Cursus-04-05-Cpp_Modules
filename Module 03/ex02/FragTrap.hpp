/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 10:16:58 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 10:18:49 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
#include "ClapTrap.hpp"


class FragTrap : public ClapTrap {
    
    private:

    
    public:
        FragTrap( std::string name );
        FragTrap( FragTrap& original );
        ~FragTrap();
        FragTrap &operator=( FragTrap original );
        void highFivesGuys(void);
        
};

#endif