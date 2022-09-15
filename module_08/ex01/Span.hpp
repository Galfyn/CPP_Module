#pragma once

#include <iostream>
#include <vector>
#include <exception>

class Span {
private:
	unsigned int		_size;
	unsigned int		_realSize;
	std::vector<int>	_arr;
public:
	Span(unsigned int N);
	Span(const Span &other);
	Span &operator=(const Span &other);
	~Span();

	void addNumber(int nb);
	void fill_vector();
	int getValue(int i);
	void printArr();
	int shortestSpan();
	int longestSpan();

	class spanEx: public std::exception{
	public:
		std::string _line;
		spanEx(std::string line);
		~spanEx() throw();

		std::string msg();
	};
};
