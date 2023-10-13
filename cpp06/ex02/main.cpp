/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 12:18:45 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/13 11:11:09 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int main(void) {
	std::srand(std::time(NULL));

	Base *base1 = generate();
	Base *base2 = generate();
	Base *base3 = generate();

	identify(base1);
	identify(base2);
	identify(base3);

	Base &base11 = *base1;
	Base &base22 = *base2;
	Base &base33 = *base3;

	identify(base11);
	identify(base22);
	identify(base33);

	Base *bad1 = NULL;
	Base bad2;

	identify(bad1);
	identify(bad2);

	delete base1;
	delete base2;
	delete base3;
}
