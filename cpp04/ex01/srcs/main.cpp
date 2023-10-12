/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:59:48 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/03 14:39:05 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

#include <ctime>

void test_animal_copies(void)
{
	std::cout << "\n\t=== Testing shallow or deep copies ===\n" << std::endl;
	
	Cat *cat = new Cat();
	Cat *clone = new Cat(*cat);
	

	std::cout << "\n\tCats brain: " << cat->getBrain() << std::endl << std::endl;
	delete cat;

	std::cout << "\tClone cat brain: " << clone->getBrain() << std::endl << std::endl;
	delete clone;
	std::cout << std::endl;
}

void test_destructors(void)
{
	std::cout << "\n\t=== Testing destructors ===\n" << std::endl;
	
	Animal *animals[4] = 
	{
		new Dog(),
		new Dog(),
		new Cat(),
		new Cat()
	};

	for (int i = 0; i < 4; i++)
		delete animals[i];
}

void test_leaks(void)
{
	std::cout << "\n\t=== Testing leaks ===\n" << std::endl;

	Cat *cat1 = new Cat();
	Cat *cat2 = new Cat();
	
	*cat1 = *cat2;

	std::cout << "\n\tcat1 brain: " << cat1->getBrain() << std::endl << std::endl;
	delete cat1;

	std::cout << "\tcat2 brain: " << cat2->getBrain() << std::endl << std::endl;
	delete cat2;

	Dog *dog1 = new Dog();
	Dog *dog2 = new Dog();
	
	*dog1 = *dog2;

	std::cout << "\n\tdog1 brain: " << dog1->getBrain() << std::endl << std::endl;
	delete dog1;

	std::cout << "\tdog2 brain: " << dog2->getBrain() << std::endl << std::endl;
	delete dog2;
}

int main()
{
	std::srand(std::time(NULL));
	test_animal_copies();
	test_destructors();
	test_leaks();
}
