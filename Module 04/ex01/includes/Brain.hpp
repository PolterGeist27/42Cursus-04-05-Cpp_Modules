/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 15:04:35 by diogmart          #+#    #+#             */
/*   Updated: 2023/06/01 15:25:21 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {

    public:
        Brain();
        Brain(Brain const &original);
        ~Brain();

        Brain &operator=(Brain const &original);

    private:
        std::string _ideas[100];

};

#endif