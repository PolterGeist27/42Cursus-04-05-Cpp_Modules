/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:04:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 15:14:21 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

    public:
        Brain();
        Brain(Brain const &other);
        ~Brain();

        Brain &operator=(Brain const &other);

    private:
        std::string _ideas[100];

};

#endif