#include "Span.hpp"

#define N 10

int main() {
	try
	{
		Span first(N);

		first.fill_vector();
//		first.printArr();

		first.addNumber(10);

		std::cout << first.shortestSpan() << std::endl;
		std::cout << first.longestSpan() << std::endl;
	}
	catch (Span::spanEx & other)
	{
		std::cout << other.msg() << std::endl;
	}
}
