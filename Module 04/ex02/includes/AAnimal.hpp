/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 13:00:24 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 12:43:07 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

# include <iostream>

 class AAnimal {

    protected:
        std::string _type;

    public:
        AAnimal();
        AAnimal(AAnimal const &original);
        virtual ~AAnimal();

        AAnimal &operator=(AAnimal const &original);
        
        virtual void makeSound() const = 0;
        std::string getType();
};

#endif