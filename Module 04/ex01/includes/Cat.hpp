/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:43:38 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 11:16:07 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {

    public:
        Cat();
        Cat(Cat const &original);
        virtual ~Cat();

        Cat& operator=(const Cat &original);

        void makeSound() const;
        Brain *getBrain();

    private:
        Brain *_brain;
};

#endif