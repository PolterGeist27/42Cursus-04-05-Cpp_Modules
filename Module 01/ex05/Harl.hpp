/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:13:34 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 15:17:49 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl {
    
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );

    public:
        Harl();
        ~Harl();
        void complain( std::string level );

};

#endif