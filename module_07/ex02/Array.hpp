#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <vector>

template<class T>
class Array{
private:
	T *_array;
	unsigned int _n;
public:
	Array(): _array(NULL){
		std::cout << "[Array] Default constructor " << std::endl;
	}
	Array(unsigned int n): _n(n){
		_array = new T[n];
		for (unsigned int i = 0; i < n; ++i) {
			_array[i] = 0;
		}
		std::cout << "[Array] With param constructor " << std::endl;
	}

	Array(const Array &other){
		_n = other._n;
		_array = new T[other._n];
		for (unsigned int i = 0; i < _n; ++i) {
			_array[i] = other._array[i];
		}
		std::cout << "[Array] Copy constructor" << std::endl;
	}
	Array & operator =(const Array &other){
		if (this != &other){
			_n = other._n;
			delete []_array;
			_array = new T[other._n];
			for (int i = 0; i < _n; ++i) {
				_array[i] = other._array[i];
			}
		}
		std::cout << "[Array] Assignment operator" << std::endl;
		return *this;
	}
	~Array(){
		delete[] _array;
		std::cout << "[Array] Destructor" << std::endl;
	}
T & operator [](unsigned int index){
		if (index >= _n)
			throw (std::out_of_range("Index is out of range"));
	return _array[index];
	}
	size_t getSize(){
		return (size_t)_n;
	}
	void change(int index, int value){
		_array[index] = value;
	}

};

#endif
