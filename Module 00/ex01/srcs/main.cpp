/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/10 15:02:46 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/15 16:00:47 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
//#include "Contact.hpp"
//#include "PhoneBook.hpp"

int main(int argc, char **argv)
{
    std::string input;

    (void)argv;
    if (argc != 1) {
        std::cout << "Error: Wrong number of arguments." << std::endl;
        return (1);
    }

    std::cout << "Welcome to My Awesome Phonebook!" << std::endl;
    
    while (1) {
        std::cout << "Available commands:\n -ADD: save a new contact\n -SEARCH: display a specific contact\n -EXIT" << std::endl;
        std::cout << "Please enter a command: ";
        std::cin >> input;

        if (input == "ADD")
            ; // Do stuff
        else if (input == "SEARCH")
            ; // Do other stuff
        else if (input == "EXIT") {
            std::cout << "Thanks for using My Awesome Phonebook!" << std::endl;
            return 0;
        }
    }
}