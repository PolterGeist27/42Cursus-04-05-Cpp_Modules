/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:40:44 by diogmart          #+#    #+#             */
/*   Updated: 2023/11/06 12:45:17 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <vector>
#include <deque>
#include <iterator>
#include <cstdlib>

class PmergeMe {

	private:
		std::vector<int> _vec;
		std::deque<int> _deq;
		void mergeVec(std::vector<int> left, std::vector<int> right, std::vector<int> vec);
		void mergeDeq(std::deque<int> left, std::deque<int> right, std::deque<int> deq);

	public:
		PmergeMe();
		PmergeMe(const PmergeMe& original);
		~PmergeMe();
		PmergeMe &operator=(const PmergeMe& original);

		PmergeMe(std::vector<int> vec);

		void Sort(std::vector<int> vec);

		void mergeSortVec(std::vector<int> vec);
		void mergeSortDeq(std::deque<int> deq);
};
