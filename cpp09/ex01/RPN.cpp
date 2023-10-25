/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:59:49 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/25 13:06:57 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

//RPN::RPN(const std::string& expression) {}

RPN::RPN(const RPN& original) {
    (void)original;
}

RPN::~RPN() {}

RPN &RPN::operator=(const RPN& original) {
    (void)original;
    return (*this);
}

void RPN::solveExpression(const std::string& expr) {
    
    if (!RPN::isValid(expr)) {
        std::cerr << "Error" << std::endl;
        return;
    }

    // divide de expression into each chars ? (or maybe just go through the string one by one ?)
    // push chars one by one into the stack until a operation is found
    // then pop the last two chars in the stack and perform the operation between them
    // push the result into the stack

    for (size_t i = 0, len = expr.length(); i < len; i++) {
        std::string token = expr[i];
        this->stack.push(strtod(token.c_str(), NULL));
    }
}

bool RPN::isValid(const std::string& expr) {
    if (expr.find_first_not_of(ALLOWED_CHARS))
        return (false);
}
