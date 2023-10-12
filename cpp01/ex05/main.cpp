/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 15:13:37 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/25 11:30:23 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void) {
    Harl harl;

    std::cout << "====(DEBUG)====" << std::endl;
    harl.complain( "DEBUG" );
    std::cout << std::endl;

    std::cout << "====(INFO)====" << std::endl;
    harl.complain( "INFO" );
    std::cout << std::endl;
    
    std::cout << "====(WARNING)====" << std::endl;
    harl.complain( "WARNING" );
    std::cout << std::endl;

    std::cout << "====(ERROR)====" << std::endl;
    harl.complain( "ERROR" );
    std::cout << std::endl;

}