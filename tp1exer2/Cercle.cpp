#include "Cercle.h"
#include <iostream>
#include<cmath>
using namespace std;
double pi = 3.14;
Cercle::Cercle()
{
    double x, y;
    point::m_creator(x, y);
    
    this->rayon = 0;
}

Cercle::Cercle(double r,const Point& P)
{
    this->centre = P;
    this->rayon = r;
}

Cercle::Cercle(const Cercle& C)
{
    this->rayon = C.rayon;
    this->centre = Point(C.centre);
}

void Cercle::m_print()
{
    cout << "le rayon est:" << this->rayon;
    this->centre.m_printPoint() ;

}

double Cercle::get_rayon() const
{

    return this->rayon;
}

void Cercle::set_rayon(double r)
{
    this->rayon = r;
}

Cercle Cercle::translate(double d)
{
    Cercle res;
    res.centre=this->centre.translate(d);
    res.rayon = this->rayon;
    return res;
}

double Cercle::surface() const
{
    double sur;
   sur = pi * pow(this->rayon, 2);
    return sur;
}

double Cercle::perimetre() const
{
     double peri;
    peri =2 * pi *this->rayon;
    return peri;
}
