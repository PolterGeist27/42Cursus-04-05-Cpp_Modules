/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 11:49:28 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/12 12:15:51 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data data = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit. Pellentesque et viverra urna, sed pharetra mauris.", 42};

	std::cout << "Data address: " << &data << std::endl;
	std::cout << "Data string content: " << data.LoremIpsum << std::endl;
	std::cout << "Data int content: " << data.i << std::endl;

	uintptr_t ptr = Serializer::serialize(&data);
	std::cout << "Serialized address: " << &ptr << std::endl;

	std::cout << "Deserialized address: " << Serializer::deserialize(ptr) << std::endl;
}