/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:43 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/17 15:29:04 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <climits>

class Span
{
    private:
        unsigned int _N;
        std::vector<int> _vec;

    public:
        Span();
        Span(unsigned int N);
        Span(const Span& original);
        Span&    operator=(const Span& original);
        ~Span();

        void addNumber(int num);
        unsigned int shortestSpan();
        unsigned int longestSpan();
        void fill(void);

        std::size_t getSize() const;
        void printVec();

        class VectorFullException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

        // When she hits you with the SizeTooSmallException ;-;
        class SizeTooSmallException : public std::exception {
            public:
                virtual const char *what() const throw();
        };
};

int gen(void);
