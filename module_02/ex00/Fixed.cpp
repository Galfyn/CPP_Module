#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed():_fixed_value(0) {
	std::cout << "Default constructor called" << std::endl;
}
Fixed::Fixed(const Fixed &other): _fixed_value(other._fixed_value) {
	std::cout << "Copy constructor called" << std::endl;
}
Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixed_value = other.getRawBits();
	return *this;
}
Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits(const int raw){
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}
