#pragma once
#include"Point.h"
class Cercle
{
public:
	Cercle();
	Cercle(double r, const Point & P );
	Cercle(const Cercle & C);
	void m_print();
	double get_rayon() const;
	void set_rayon(double r);
	Cercle translate(double d);
	double surface() const;
	double perimetre() const;
private:
	double rayon;
	Point centre;
};

