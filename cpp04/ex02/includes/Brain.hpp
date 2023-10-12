/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:04:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/05 10:20:55 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <cstdlib>

# define NUM_IDEAS 100

class Brain {

    public:
        Brain();
        Brain(Brain const &original);
        ~Brain();

        Brain &operator=(Brain const &original);

    private:
        std::string _ideas[NUM_IDEAS];

};

#endif