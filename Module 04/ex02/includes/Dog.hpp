/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:43:36 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 11:43:39 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public virtual AAnimal {

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