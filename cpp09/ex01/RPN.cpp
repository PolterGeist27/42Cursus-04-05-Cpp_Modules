/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:59:49 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/27 10:15:19 by diogmart         ###   ########.fr       */
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
        std::cerr << "Error: invalid expression." << std::endl;
        return;
    }

    // divide de expression into each chars ? (or maybe just go through the string one by one ?)
    // push chars one by one into the stack until a operation is found
    // then pop the last two chars in the stack and perform the operation between them
    // push the result into the stack

    std::string token;
    for (size_t i = 0, len = expr.length(); i < len; i++) {
        token = expr[i];
        if (token[0] == ' ')
            continue;
        if (isdigit(token[0]))
            this->stack.push(atof(token.c_str()));
        else 
            this->stack.push(RPN::preformOperation(token[0]));
    }
    std::cout << this->stack.top() << std::endl;
}

double RPN::preformOperation(char token) {

    double num1, num2;

    if (this->stack.empty())
        throw std::runtime_error("Error: Invalid operation.");
    num2 = this->stack.top();
    this->stack.pop();
    if (this->stack.empty())
        throw std::runtime_error("Error: Invalid operation.");
    num1 = this->stack.top();
    this->stack.pop();
    
    switch (token)
    {
    case '+':
        return (num1 + num2);
        break;
    
    case '-':
        return (num1 - num2);
        break;

    case '*':
        return (num1 * num2);
        break;

    case '/':
        if (num2 == 0)
            throw std::runtime_error("Error: division by zero.");
        return (num1 / num2);
        break;
    
    default:
        throw std::runtime_error("Error: invalid operation token: " + token);
        break;
    }
}

bool RPN::isValid(const std::string& expr) {
    for(size_t i = 0; i < expr.length(); i++) {
        if (!isdigit(expr[i]) && expr[i] != ' ' && !isOperand(expr[i]))
            return (false);
    }
    return (true);
}

bool RPN::isOperand(char token) {
    if (token == '+' || token == '-' || token == '*' || token == '/')
        return (true);
    return(false);
}
