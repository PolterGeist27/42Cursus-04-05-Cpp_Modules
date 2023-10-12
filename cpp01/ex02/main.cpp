/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 11:46:21 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/24 12:03:42 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using std::string;

int main(void)
{
    string str = "HI THIS IS BRAIN";
    string *stringPTR = &str;
    string &stringREF = str;

    std::cout << "memory address of the string variable: " << &str << std::endl;
    std::cout << "memory address held by stringPTR:      " << stringPTR << std::endl;
    std::cout << "memory address held by stringREF:      " << &stringREF << std::endl;

    std::cout << std::endl;

    std::cout << "value of the string variable:  " << str << std::endl;
    std::cout << "value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "value pointed to by stringREF: " << stringREF << std::endl;
}