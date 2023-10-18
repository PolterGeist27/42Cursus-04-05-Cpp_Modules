/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:40 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/18 11:01:55 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : _N(0) {}

Span::Span(unsigned int N) : _N(N) {}

Span::Span(const Span& original) : _N(original._N), _vec(original._vec) {}

Span::~Span() {}

Span &Span::operator=(const Span& original) {
    if (this != &original) {
        this->_N = original._N;
        this->_vec.clear();
        std::copy(original._vec.begin(), original._vec.end(), this->_vec.begin());
    }
    return (*this);
}

void Span::addNumber(int num) {
    if (this->_vec.size() == this->_N)
        throw Span::VectorFullException();
    this->_vec.push_back(num);
}

unsigned int Span::shortestSpan() {
    if (this->_N < 2)
        throw Span::SizeTooSmallException();
    unsigned int minSpan = UINT_MAX; // largest possible span between two numbers
    for (unsigned int i = 0; i < this->_vec.size(); i++)
    {
        for (unsigned int j = i + 1; j < this->_vec.size(); j++)
        {
            unsigned int span = abs(this->_vec[i] - this->_vec[j]);
            if (span < minSpan) {
                minSpan = span;
                //std::cout << "i and j:" << this->_vec[i] << " " << this->_vec[j] << std::endl;
            }
        }
    }
    return (minSpan);
}

int gen(void) {
    return(std::rand() % 10000);
}

void Span::fill(void) {
    this->_vec.resize(this->_N);
    std::generate(this->_vec.begin(), this->_vec.end(), &gen);
}

unsigned int Span::longestSpan() {
    if (this->_N < 2)
        throw Span::SizeTooSmallException();
    int min = *(std::min_element(this->_vec.begin(), this->_vec.end()));
    int max = *(std::max_element(this->_vec.begin(), this->_vec.end()));
    return (max - min);
}

std::size_t Span::getSize() const {
    return (this->_vec.size());
}

void Span::printVec() {
    for (std::vector<int>::iterator it = this->_vec.begin(); it != this->_vec.end(); ++it)
        std::cout << *it << " ";
    std::cout << std::endl;
}

const char *Span::VectorFullException::what() const throw() {
    return ("Span exception: vector is full.");
}

const char *Span::SizeTooSmallException::what() const throw() {
    return ("Span exception: vector size is too small."); // maybe it has a great personality though.
}

