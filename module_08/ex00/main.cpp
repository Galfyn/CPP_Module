#include "easyfind.hpp"

int main() {
	std::list	<int> l;
	std::vector	<int> v;
	std::set	<int> s;

	std::cout << "Find LIST" << std::endl;
	for (int i = 0; i < 10; ++i) {
		l.push_back(i);
	}
	easyfind(l, 11);

	std::cout << "Find VECTOR" << std::endl;
	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
	}
	easyfind(v, 5);

	std::cout << "Find SET" << std::endl;
	for (int i = 0; i < 10; ++i) {
		s.insert(i);
	}
	easyfind(s, 2);
	return 0;
}
