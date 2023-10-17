/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 12:25:55 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/17 13:20:43 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <algorithm>

class NoOccurrenceFoundException : public std::exception {
    public:
        virtual const char *what() const throw() {
            return ("Exception: No occurrence found.");
        }
};

template <typename T>
void easyfind(const T& container, int n) {
    if (std::find(container.begin(), container.end(), n) != container.end())
        std::cout << n << " is in this container." << std::endl;
    else
        throw NoOccurrenceFoundException();
}

