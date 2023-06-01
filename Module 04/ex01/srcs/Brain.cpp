/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:04:24 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 15:26:15 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called!" << std::endl;
}

Brain::Brain(Brain const &original) {
    std::cout << "Brain copy constructor called!" << std::endl;
    *this = original;
}

Brain::~Brain() {
    std::cout << "Brain destructor called!" << std::endl;
}

Brain &Brain::operator=(Brain const &original) {
    return (*this);
}
