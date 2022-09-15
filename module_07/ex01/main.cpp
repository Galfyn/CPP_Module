#include "iter.hpp"

int main( void )
{
	int arr[] ={1, 2, 3 , 4, 5 ,6};
	double arr2[] ={1.23, 2.12, 3.98, 4.34, 5.00,6.14};
	char cha[] = {'i', 'f', 'm', 'm', 'p', 'x'};

	std::cout << "------------------EXAMPLE1 - INT--------------------" << std::endl;
	print(arr, 6);
	iter(arr, 6, dec);
	print(arr, 6);

	std::cout << "------------------EXAMPLE2 - CHAR--------------------" << std::endl;

	print(cha, 6);
	iter(cha, 6, dec);
	print(cha, 6);
	std::cout << "------------------EXAMPLE3 - DOUBLE--------------------" << std::endl;

	print(arr2, 6);
	iter(arr2, 6, inc);
	print(arr2, 6);

	std::cout << "---PROGRAM FINISH---" << std::endl;
}