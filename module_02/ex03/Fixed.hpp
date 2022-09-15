#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
private:
	int					_fixed_value;
	static  const int	_fractional_bits = 8;

public:
	Fixed();
	Fixed( const int i );
	Fixed( const float y );
	Fixed(const Fixed &);
	Fixed & operator =( const Fixed & );
	~Fixed();

	Fixed operator ++();
	Fixed operator ++(int);
	Fixed operator --(int);
	Fixed operator --();

	Fixed operator +(Fixed const &other) const;
	Fixed operator -(Fixed const &other) const;
	Fixed operator *(Fixed const &other) const;
	Fixed operator /(Fixed const &other) const;

	bool operator ==(Fixed const &other) const;
	bool operator !=(Fixed const &other) const;
	bool operator <(Fixed const &other) const;
	bool operator <=(Fixed const &other) const;
	bool operator >=(Fixed const &other) const;
	bool operator >(Fixed const &other) const;


	int					getRawBits( void ) const;
	void				setRawBits( int const raw );
	int					toInt( void ) const;
	float				toFloat( void ) const;
	static Fixed		&min(Fixed &, Fixed &);
	static Fixed		&max(Fixed &, Fixed &);
	static Fixed const	&min(Fixed const &, Fixed const &);
	static Fixed const	&max(Fixed const &, Fixed const &);
};

std::ostream &operator <<(std::ostream &os, const Fixed & value);

#endif