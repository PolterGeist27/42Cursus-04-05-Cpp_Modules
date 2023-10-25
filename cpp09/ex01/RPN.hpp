/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:59:53 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/25 13:02:47 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <string>

#define ALLOWED_CHARS "+-/* 1234567890" // operation tokes, space and all numbers

class RPN
{
    private:
        // double because the result can be decimal
        std::stack<double> stack;
        
        RPN(const RPN& original);
        RPN& operator=(const RPN& original);

    public:
        RPN();
        //RPN(const std::string& expression);
        ~RPN();

        void solveExpression(const std::string& expr);
        bool isValid(const std::string& expr);
};
