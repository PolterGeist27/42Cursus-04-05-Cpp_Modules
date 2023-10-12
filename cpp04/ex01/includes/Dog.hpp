/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:43:36 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 10:30:30 by diogmart         ###   ########.fr       */
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
        Dog(Dog const &original);
        virtual ~Dog();

        Dog &operator=(Dog const &original);

        void makeSound() const;
        Brain *getBrain();

    private:
        Brain *_brain;
};

#endif