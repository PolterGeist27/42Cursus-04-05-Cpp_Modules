/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:10:52 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/17 12:16:42 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <class T>
class Array {
    private:
        T* _array;
        unsigned int _n;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array& original);
        ~Array();
        Array& operator=(const Array& original);

        T& operator[](unsigned int i);

        int size() const;

        class IndexOutOfBoundsException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

#include "Array.tpp"
