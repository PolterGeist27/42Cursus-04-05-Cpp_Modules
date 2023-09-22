/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 12:59:48 by diogmart          #+#    #+#             */
/*   Updated: 2023/09/22 11:53:54 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* a = new Animal();
    const Animal* d = new Dog();
    const Animal* c = new Cat();

    std::cout << d->getType() << std::endl;
    std::cout << c->getType() << std::endl;
    
    c->makeSound(); //will output the cat sound!
    d->makeSound();
    a->makeSound();
    
    delete a;
    delete d;
    delete c;

    std::cout << "\n\t=== Testing wrong inheritance ===\n" << std::endl;
	
	const WrongAnimal *wcat = new WrongCat();

	wcat->makeSound();
	delete wcat;

    return 0;
}