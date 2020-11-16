
#include "Point.h"
#include <string>
#include <iostream>
using namespace std;
Point::Point()
{
	this->x = 0;
	this->y = 0;
}
Point::Point(double x, double y)
{
	this->x = x;
	this->y = y;
}

Point::Point(const Point & P)
{
	this->x = P.x;
	this->y = P.y;

}

void Point::m_printPoint() const
{
	cout<< "(" << this->x << "," << this->y << ")" << endl;
}

string Point::tostring()
{
	//string s;
	//s = "(" + x + ","this->y + ")";

	return s;
}

Point Point::translate(double d) 
	{
	Point P;
	P.x = this->x + d;
	P.y= this->y + d;


		return P;
	}
Point Point::m_creator(double x, double y)
{
	Point P1(x, y);
	return Point();
}
}