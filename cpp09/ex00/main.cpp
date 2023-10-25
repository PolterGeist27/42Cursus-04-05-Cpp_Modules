/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:57:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/25 10:57:22 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cerr << "Error: wrong number of arguments." << std::endl;
        return (1);
    }
    
    BitcoinExchange btc(argv[1]);

    btc.readInputFile();
}
