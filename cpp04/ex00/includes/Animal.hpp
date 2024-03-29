/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:00:24 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/22 11:55:51 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

 class Animal {

    protected:
        std::string _type;

    public:
        Animal();
        Animal(Animal const &original);
        virtual ~Animal();

        Animal &operator=(Animal const &original);
        
        virtual void makeSound() const;
        std::string getType() const;

};

#endif