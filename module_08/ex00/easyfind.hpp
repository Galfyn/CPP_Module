#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <string>
#include <set>
#include <list>

template<typename T>
void easyfind(T s, int i){
	if (std::find(s.begin(), s.end(), i) == s.end())
		std::cout << "Element not found." << std::endl;
	else
		std::cout << "Element found."<< std::endl;
}

#endif
