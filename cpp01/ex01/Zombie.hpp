/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:26:50 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 11:38:42 by diogmart         ###   ########.fr       */
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
        Zombie();
        ~Zombie();
        void announce( void );
        void setName( string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif