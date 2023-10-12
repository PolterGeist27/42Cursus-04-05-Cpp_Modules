/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:04:24 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/22 16:07:59 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain constructor called!" << std::endl;

    const std::string possible_ideas[] = {
        "FOOD!",
        "WALK!",
        "PETS!",
        "SCRATCH!",
        "BELLY RUBS!",
        "ATENTION!",
        "*Zero Thoughts*",
        "Sleep..."
    };

    for (int i = 0; i < NUM_IDEAS; i++) {
       this->_ideas[i] = possible_ideas[rand() % 7];
    }
}

Brain::Brain(Brain const &original) {
    std::cout << "Brain copy constructor called!" << std::endl;
    *this = original;
    for (int i = 0; i < NUM_IDEAS; i++) {
        this->_ideas[i] = original._ideas[i];
    }
}

Brain::~Brain() {
    std::cout << "Brain destructor called!" << std::endl;
}

Brain &Brain::operator=(Brain const &original) {
    if (this != &original) {
        for (int i = 0; i < NUM_IDEAS; i++) {
            this->_ideas[i] = original._ideas[i];
        }
    }
    return (*this);
}
