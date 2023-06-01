/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 14:14:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 14:18:14 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef WRONG_ANIMAL_HPP
# define WRONG_ANIMAL_HPP

# include <iostream>

 class WrongAnimal {

    protected:
        std::string _type;

    public:
        WrongAnimal();
        WrongAnimal( WrongAnimal const &other );
        ~WrongAnimal();

        WrongAnimal &operator=( WrongAnimal const &other );
        
        void makeSound() const;
        std::string getType() const;

};

#endif