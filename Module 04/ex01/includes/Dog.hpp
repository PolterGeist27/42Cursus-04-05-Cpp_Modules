/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:43:36 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 15:09:27 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {

    public:
        Dog();
        Dog(Dog const &other);
        virtual ~Dog();

        Dog &operator=(Dog const &other);

        void makeSound() const;
    
    private:
        Brain *_brain;
};

#endif