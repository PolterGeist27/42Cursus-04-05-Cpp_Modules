/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:40:57 by diogmart          #+#    #+#             */
/*   Updated: 2023/11/06 12:56:10 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe& original) : _vec(original._vec), _deq(original._deq) {}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::operator=(const PmergeMe& original) {
    if (this != &original) {
        this->_vec = original._vec;
        this->_deq = original._deq;
    }
    return (*this);
}

PmergeMe::PmergeMe(std::vector<int> vec) : _vec(vec), _deq(vec.begin(), vec.end()) {
    Sort(vec);
}

void PmergeMe::Sort(std::vector<int> vec) {
    std::cout << "Before: ";
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++) {
		std::cout << *it << " ";
	}
	std::cout << std::endl;

    // Time sort with vector
    
    clock_t start1 = clock();

    mergeSortVec(this->_vec);

    clock_t end1 = clock();
    double elapsed_time_vec = static_cast<double>(end1 - start1) / CLOCKS_PER_SEC;
    
    // Time sort with deque

    clock_t start2 = clock();

    mergeSortDeq(this->_deq);

    clock_t end2 = clock();
    double elapsed_time_deq = static_cast<double>(end2 - start2) / CLOCKS_PER_SEC;

    std::cout << "After: ";
	for (std::vector<int>::iterator it2 = this->_vec.begin(); it2 != this->_vec.end(); it2++) {
		std::cout << *it2 << " ";
	}
	std::cout << std::endl;

    std::cout << "Time to process a range of " << this->_vec.size() << " elements with std::vector : " << elapsed_time_vec << " seconds\n";
    std::cout << "Time to process a range of " << this->_deq.size() << " elements with std::deque : " << elapsed_time_deq << " seconds\n";
}

void PmergeMe::mergeSortVec(std::vector<int> vec) {
    
    if (vec.size() == 1) return;

    int middle = vec.size() / 2;

    std::vector<int> left = std::vector<int>(vec.begin(), vec.begin() + middle);
    std::vector<int> right = std::vector<int>(vec.begin() + middle, vec.end());

    mergeSortVec(left);
    mergeSortVec(right);
    mergeVec(left, right, vec);
}

void PmergeMe::mergeVec(std::vector<int> left, std::vector<int> right, std::vector<int> vec) {
    std::vector<int>::iterator l = left.begin(), r = right.begin(), it = vec.begin();

    while (l != left.end() && r != right.end()) {
        if (*l < *r) {
            *it = *l;
            it++;
            l++;
        }
        else {
            *it = *r;
            it++;
            r++;
        }  
    }

    // in case the number of elements in odd and there is one left to put in the array:
    while (l != left.end()) {
        *it = *l;
        it++;
        l++;
    }
    while (r != right.end()) {
        *it = *r;
        it++;
        r++;
    }
}

void PmergeMe::mergeSortDeq(std::deque<int> deq) {
    if (deq.size() == 1) return;

    int middle = deq.size() / 2;

    std::deque<int> left(deq.begin(), deq.begin() + middle);
    std::deque<int> right(deq.begin() + middle, deq.end());

    mergeSortDeq(left);
    mergeSortDeq(right);
    mergeDeq(left, right, deq);
}

void PmergeMe::mergeDeq(std::deque<int> left, std::deque<int> right, std::deque<int> deq) {
    std::deque<int>::iterator l = left.begin(), r = right.begin(), it = deq.begin();

    while (l != left.end() && r != right.end()) {
        if (*l < *r) {
            *it = *l;
            it++;
            l++;
        }
        else {
            *it = *r;
            it++;
            r++;
        }  
    }

    // in case the number of elements in odd and there is one left to put in the array:
    while (l != left.end()) {
        *it = *l;
        it++;
        l++;
    }
    while (r != right.end()) {
        *it = *r;
        it++;
        r++;
    }
}
