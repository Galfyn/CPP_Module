#include "Data.hpp"

uintptr_t serialize(Data *ptr){
	std::cout << "[Serialize]" << std::endl;
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *deserialize(uintptr_t ptr){
	std::cout << "[Deserialize]" << std::endl;
	return (reinterpret_cast<Data *>(ptr));
}