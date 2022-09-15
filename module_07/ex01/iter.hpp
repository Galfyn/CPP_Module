#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void iter(T *arr, int len, void func (T &value) ) {

	for (int i = 0; i < len; ++i) {
		func(arr[i]);
	}
}

template<typename T>
void print(T *arr, int len){

	for (int i = 0; i < len; ++i) {
		std::cout << arr[i] << " ";
	}
	std::cout << " << Print function" << std::endl;
}

template<typename T>
void inc(T &value)
{
	value++;
	std::cout << "Function increment" << std::endl;
}

template<typename T>
void dec(T &value){
	value--;
	std::cout << "Function decrement" << std::endl;
}

#endif
