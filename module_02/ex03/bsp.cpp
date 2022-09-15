#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point){
	Fixed comp1;
	Fixed comp2(0);
	Fixed comp3(0);

	comp1 = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	comp2 = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	comp3 = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());

	if(comp1 < 0 && comp2 < 0 && comp3 < 0)
		return (true);
	if(comp1 > 0 && comp2 > 0 && comp3 > 0)
		return (true);
	return (false);
}