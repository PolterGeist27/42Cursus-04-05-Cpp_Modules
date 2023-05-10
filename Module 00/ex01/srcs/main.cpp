/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:02:46 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/10 15:43:16 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "Contact.hpp"
#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc != 1) {
        std::cout << "Error: Wrong number of arguments." << std::endl;
        return (1);
    }
    std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
    std::cout << "Please enter a command: " << std::endl;
}