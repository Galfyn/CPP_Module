#include "Data.hpp"

int main()
{
	Data *data = new Data;
	Data *data2;
	uintptr_t ptr;

	data->str = "Hellow world!";
	std::cout  << "----------------------------"  << std::endl;
	std::cout  <<  data->str  << std::endl;
	std::cout  << data << std::endl;
	std::cout  << "----------------------------"  << std::endl;
	ptr = serialize(data);
	data2 = deserialize(ptr);
	std::cout  << "----------------------------"  << std::endl;
	std::cout  << data2->str  << std::endl;
	std::cout  << data2  << std::endl;
	std::cout  << "----------------------------"  << std::endl;
	return 0;
}