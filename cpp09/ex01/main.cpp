/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 11:58:26 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/30 10:49:41 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

// must handle these tokens: + - / *

int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cerr << "Error: wrong number of arguments." << std::endl;
        return (1);
    }

    RPN rpn;

    try {
        rpn.solveExpression(argv[1]);
    } catch (std::exception& e) {
        std::cerr << e.what() << std::endl;
    }
}