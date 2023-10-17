/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogmart <diogmart@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 11:11:02 by diogmart          #+#    #+#             */
/*   Updated: 2023/10/17 12:18:09 by diogmart         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <class T>
Array<T>::Array() : _n(0) {
        this->_array = new T[this->_n];
}

template <class T>
Array<T>::Array(unsigned int n) : _n(n) {
        this->_array = new T[this->_n];
        for (unsigned int i = 0; i < this->_n; i++) {
            this->_array[i] = T();
        }
}

template <class T>
Array<T>::Array(const Array& original) {
    this->_n = original._n;
    this->_array = new T[this->_n];
    for (unsigned int i = 0; i < original._n; i++)
        this->_array[i] = original._array[i];
}

template <class T>
Array<T>::~Array() {
    delete[] this->_array;
}


template <class T>
Array<T>& Array<T>::operator=(const Array<T>& original) {
    if (this != &original)
    {
        delete[] this->_array;
        this->_n = original._n;
        this->_array = new T[this->_n];
        for (unsigned int i = 0; i < original._n; i++)
            this->_array[i] = original._array[i];
    }
    return (*this);
}

template <class T>
int Array<T>::size() const {
    return (this->_n);
}

template <class T>
T& Array<T>::operator[](unsigned int i) {
    if (i >= this->_n)
        throw Array<T>::IndexOutOfBoundsException();
    return (this->_array[i]);
}

template <class T>
const char *Array<T>::IndexOutOfBoundsException::what() const throw() {
    return ("Array exception: Index out of bounds.");
}