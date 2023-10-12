/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:26:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 11:05:46 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

using std::string;

class Zombie {

    private:
        string _name;

    public:
        Zombie(string name);
        ~Zombie();
        void announce( void );
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif