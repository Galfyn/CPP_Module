#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed{
public:
	Fixed();
	Fixed				( const int i );
	Fixed				( const float y );
	Fixed				( const Fixed & other );
	Fixed & operator =	( const Fixed & other );
	~Fixed();

	int		getRawBits	( void ) const;
	void	setRawBits	( int const raw );
	int		toInt		( void ) const;
	float	toFloat		( void ) const;

private:
	int                 _fixed_value;
	static const int    _fractional_bits;
};

std::ostream & operator << (std::ostream &op, const Fixed &value);

#endif