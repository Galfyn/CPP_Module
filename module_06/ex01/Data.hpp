#ifndef DATA_HPP
#define DATA_HPP

#include <iostream>
struct Data{
	std::string str;
};

uintptr_t	serialize(Data *ptr);
Data		*deserialize(uintptr_t ptr);

#endif
