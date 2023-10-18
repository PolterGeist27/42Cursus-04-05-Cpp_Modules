/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 11:11:21 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/18 11:48:10 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <iterator>

template <typename T>
class MutantStack : public std::stack<T> {
    private:

    public:
        MutantStack();
        MutantStack(const MutantStack& original);
        MutantStack& operator=(const MutantStack& original);
        ~MutantStack();

        typedef typename std::stack<T>::container_type::iterator iterator;

        iterator begin(void);
        iterator end(void);
};

#include "MutantStack.tpp"
