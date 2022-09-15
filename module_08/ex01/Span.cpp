#include "Span.hpp"

Span::Span(unsigned int N): _size(N) {
	std::cout << "[Span] Default constructor." << std::endl;
}

Span::Span(const Span &other) {
	*this = other;
	std::cout << "[Span] Copy constructor." << std::endl;
}

Span &Span::operator=(const Span &other) {
	if (this != &other){
		_size = other._size;
		for (int i = 0; i < (int)_size; ++i) {
			_arr[i] = other._arr[i];
		}
	}
	std::cout << "[Span] Assingnment operator." << std::endl;
	return *this;
}

Span::~Span() {
	std::cout << "[Span] Destructor." << std::endl;
}

void Span::addNumber(int nb) {
	try{
		if(nb > INT_MAX || nb < 0)
			throw spanEx("Number is don't valid.");
		if(_arr.size() >= _size)
			throw spanEx("Vector is full!Can't add number.");
		_arr.push_back(nb);
	}
	catch (Span::spanEx & other){
		std::cout << other.msg() << std::endl;
	}
}

void Span::fill_vector()
{
	for (int i = 0; i < (int)_size; i++)
		addNumber(rand());
}
int Span::getValue(int i)
{
	return _arr[i];
}
void Span::printArr()
{
	for (int i = 0; i < (int)_size; i++)
		std::cout << getValue(i) << std::endl;
}

int Span::shortestSpan()
{
	_realSize = _arr.size();
	if (_realSize <= 1 || _arr.empty())
		throw spanEx("Vector has one element or less!");
	std::sort(_arr.begin(), _arr.end());
	int min = INT_MAX;
	int buf;
	for (int i = 0; i < (int)_realSize - 1; i++ )
	{
		buf = _arr[i + 1] - _arr[i];
		if (buf < min)
			min = buf;
	}
	return (min);
}
int Span::longestSpan()
{
	_realSize = _arr.size();
	if (_realSize <= 1 || _arr.empty())
		throw spanEx("Vector has one element or less!");
	int min = *std::min_element(_arr.begin(), _arr.end());
	int max = *std::max_element(_arr.begin(), _arr.end());
	return (max - min);
}

Span::spanEx::spanEx(std::string line): _line(line) {};
Span::spanEx::~spanEx() throw() {};

std::string Span::spanEx::msg()
{
	return _line;
}