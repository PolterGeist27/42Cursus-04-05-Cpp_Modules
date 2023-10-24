/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 12:57:19 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/24 11:18:55 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


int main(int argc, char **argv) {
    
    if (argc != 2) {
        std::cerr << "Error: wrong number of arguments." << std::endl;
        return (1);
    }
    
    std::ifstream in_file;

    in_file.open(argv[1]);
}
