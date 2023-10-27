/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:40:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/27 11:29:12 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>

class PmergeMe {

	private:
		std::vector<int> _vec;
		void merge();

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& original);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe& original);

		void mergeSort();
		void fillVec(char **argv);
};
