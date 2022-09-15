#include "Fixed.hpp"

const int Fixed::_fractional_bits = 8;

Fixed::Fixed():_fixed_value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i): _fixed_value(i << _fractional_bits) {
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float y): _fixed_value(roundf(y * (1 << _fractional_bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): _fixed_value(other._fixed_value) {
	std::cout << "Copy constructor called" << std::endl;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		_fixed_value = other._fixed_value;
	return *this;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_value);
}

void Fixed::setRawBits(const int raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_value = raw;
}

int Fixed::toInt( void ) const {
	return (_fixed_value >> _fractional_bits);
}

float Fixed::toFloat( void ) const {
	return ((float)_fixed_value / (1 << _fractional_bits));
}

std::ostream & operator << (std::ostream &os, const Fixed & value){
	os << value.toFloat();
	return os;
}