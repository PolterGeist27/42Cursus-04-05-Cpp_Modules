/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:13:30 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:39:16 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

    Harl::Harl() {};
    Harl::~Harl() {};

void Harl::debug( void ) {
    std::cout << "I love having extra bacon for my ";
    std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. ";
    std::cout << "You didn’t put enough bacon in my burger! ";
    std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
    std::cout <<  "I think I deserve to have some extra bacon for free. "; 
    std::cout << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error( void ) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::filter( std::string level ) {
    
    int filter;

    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    filter = 0;
    while (levels[filter] != level)
        filter++;

    switch (filter)
    {
        case 0:
            std::cout << "====(DEBUG)====" << std::endl;
            this->complain("DEBUG");

        case 1:
            std::cout << "====(INFO)====" << std::endl;
            this->complain("INFO");

        case 2:
            std::cout << "====(WARNING)====" << std::endl;
            this->complain("WARNING");
            
        case 3:
            std::cout << "====(ERROR)====" << std::endl;
            this->complain("ERROR");
    
        default:
            break;
    }
}

void Harl::complain( std::string level ) {

    void(Harl::*funcs[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            (this->*funcs[i])();
    }
}
