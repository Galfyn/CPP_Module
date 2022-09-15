#include "Fixed.hpp"

/* ------------Orthodox canonical form ----------------- */

Fixed::Fixed():_fixed_value(0) {}
Fixed::Fixed(const Fixed &other): _fixed_value(other._fixed_value){}
Fixed &Fixed::operator =(const Fixed &other) {
	if (this != &other)
		_fixed_value = other._fixed_value;
	return *this;
}
Fixed::~Fixed() {}

/* ------------Orthodox canonical form -----end-------- */

Fixed::Fixed(const int i): _fixed_value(i << _fractional_bits) {}
Fixed::Fixed(const float y): _fixed_value(roundf(y * (1 << _fractional_bits))){}

/* ------------get/set function----------------- */

int Fixed::getRawBits() const {
	return (this->_fixed_value);
}

void Fixed::setRawBits(const int raw) {
	this->_fixed_value = raw;
}

int Fixed::toInt( void ) const {
	return (_fixed_value >> _fractional_bits);
}

float Fixed::toFloat( void ) const {
	return ((float)_fixed_value / (1 << _fractional_bits));
}

/* ------------get/set function-----end------------- */

/* ------------function to class------------------- */

const Fixed &Fixed::max(const Fixed &Cl1, const Fixed &Cl2) {
	return ((Cl1 > Cl2) ? Cl1 : Cl2);
}
Fixed &Fixed::min(Fixed &Cl1, Fixed &Cl2) {
	return ((Cl1 < Cl2) ? Cl1 : Cl2);
}
const Fixed &Fixed::min(const Fixed &Cl1, const Fixed &Cl2) {
	return ((Cl1 < Cl2) ? Cl1 : Cl2);
}
std::ostream & operator <<(std::ostream &os, const Fixed & value){
	os << value.toFloat();
	return os;
}

Fixed &Fixed::max(Fixed &Cl1, Fixed &Cl2) {
	return ((Cl1 > Cl2) ? Cl1 : Cl2);
}

/* ------------function to class------end---------- */

		/* Overloading Comparison Operators */

bool Fixed::operator ==(const Fixed &other) const {
	return _fixed_value == other._fixed_value;
}
bool Fixed::operator !=(const Fixed &other) const {
	return (_fixed_value != other._fixed_value);
}
bool Fixed::operator <(const Fixed &other) const {
	return (_fixed_value < other._fixed_value);
}
bool Fixed::operator <=(const Fixed &other) const {
	return (_fixed_value <= other._fixed_value);
}
bool Fixed::operator >(const Fixed &other) const {
	return (_fixed_value > other._fixed_value);
}
bool Fixed::operator >=(const Fixed &other) const {
	return (_fixed_value >= other._fixed_value);
}

	/* Overloading increment/decrement (pre/post) Operators */

Fixed Fixed::operator ++() {
	this->_fixed_value++;
	return *this;
}
Fixed Fixed::operator ++(int) {
	Fixed tmp(*this);

	this->_fixed_value++;
	return tmp;
}
Fixed Fixed::operator --(int) {
	Fixed tmp(*this);

	this->_fixed_value--;
	return tmp;
}
Fixed Fixed::operator --() {
	this->_fixed_value--;
	return *this;
}

	/* Overloading  arithmetic  Operators */

Fixed Fixed::operator +(const Fixed &other) const {
	Fixed tmp;

	tmp._fixed_value = _fixed_value + other._fixed_value;
	return tmp;
}
Fixed Fixed::operator -(const Fixed &other) const {
	Fixed tmp;

	tmp._fixed_value = _fixed_value - other._fixed_value;
	return tmp;
}
Fixed Fixed::operator *(const Fixed &other) const {
	Fixed tmp;
	tmp._fixed_value = _fixed_value *other._fixed_value/(1 << _fractional_bits);
	return tmp;
}
Fixed Fixed::operator /(const Fixed &other) const {
	Fixed tmp;

	tmp._fixed_value = _fixed_value * pow(2, _fractional_bits) / other._fixed_value;
	return tmp;
}