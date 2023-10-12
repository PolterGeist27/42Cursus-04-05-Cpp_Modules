/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 12:06:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 12:27:31 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>

class Weapon {
    
    private:
        std::string _type;

    public:
        Weapon( std::string type );
        ~Weapon();
        const std::string &getType( void );
        void setType( std::string type );
};

#endif
