/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:12:53 by diogmart          #+#    #+#             */
/*   Updated: 2023/05/29 10:23:29 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

using std::string;

int main(int argc, char **argv)
{
    if (argc != 4) {
        std::cout << "Wrong number of arguments!" << std::endl;
        return 1;
    }

    string line;

    string input_file = argv[1]; // input file
    string output_file = input_file.append(".replace");
    const char *out_file = output_file.c_str();
    string s1 = argv[2]; // first string
    string s2 = argv[3]; // second string

    std::ifstream file_in;
    std::ofstream file_out;

    file_in.open(argv[1]);
    file_out.open(out_file);

    if (file_in.is_open() && file_out.is_open())
    {
        while (getline(file_in, line))
        {
            if (line.find(s1) != std::string::npos)
            {
                size_t pos = 0;
                
                while (1) {
                    pos = line.find(s1, pos);
                    
                    if (pos == std::string::npos) 
                        break;
                    line.erase(pos, s1.length());
                    line.insert(pos, s2);
                    pos += s2.length();
                }
            }
            file_out << line << std::endl;
        }

        file_in.close();
        file_out.close();
    }

    return (0);
}