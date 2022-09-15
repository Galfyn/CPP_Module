#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
private:
	Fixed const _x;
	Fixed const _y;
public:
	Point();
	Point(const Point &);
	Point & operator =(const Point &);
	~Point();

	Point(const float x, const float y);
	Fixed getX( void ) const;
	Fixed getY( void ) const;
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
std::ostream& operator << (std::ostream &os, const Point &other);

#endif