#include "whatever.hpp"

int	main( void ) {

	int a = 2;
	int b = 3;

	std::cout << "---------------------------------" << std::endl;
	std::cout << "A:" << a << std::endl;
	std::cout << "B:" << b << std::endl;
	std::cout << "---------------------------------" << std::endl;
	swap( a, b );
	std::cout  << "[SWAP]" << "a = " << a << ", b = " << b  << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::cout  <<"min( a, b ) = " << ::min( a, b )  << std::endl;
	std::cout  <<"max( a, b ) = " << ::max( a, b )  << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::string c1 = "chaine1";
	std::string c2 = "chaine2";
	std::cout << "C1:" << c1 << std::endl;
	std::cout << "C2:" << c2 << std::endl;
	std::cout << "---------------------------------" << std::endl;
	swap(c1, c2);
	std::cout  << "[SWAP]" << "c1 = " << c1 << ", c2 = " << c2  << std::endl;
	std::cout << "---------------------------------" << std::endl;

	std::cout  <<"min( c1, c2 ) = " << ::min( c1, c2 )  << std::endl;
	std::cout  <<"max( c1, c2 ) = " << ::max( c1, c2 )  << std::endl;
	std::cout << "---------------------------------" << std::endl;

	return 0;
}