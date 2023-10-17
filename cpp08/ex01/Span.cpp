/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 13:55:40 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/17 13:55:41 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span () {}

Span::Span (const Span& original) {
    //copy
}

Span::~Span () {}

Span &Span::operator=(const Span& original) {
    if (this != &original)
       ;
    return (*this);
}
