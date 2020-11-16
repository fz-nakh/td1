#include "Complex.h"
#include<iostream>
#include<cmath>
using namespace std;
Complex::Complex()
{
	this->re = 0.0;
	this->im = 0.0;

}

Complex::Complex(double re, double im)
{
	this->re = re;
	this->im = im;

}

Complex::Complex(const Complex& C)
{
	this->re = C.re;
	this->im = C.im;
}

void Complex::afficherComplex()
{
	if (this->im >= 0) {
		cout << this->re << "+i" << this->im << endl;
	}
	else {
			cout << this->re << "-i" << -this->im << endl;

	}
	
}


double Complex::Module()
{
	double res;
	res = sqrt(pow(this->re,2) + pow(this->im,2));
	return res;
}

Complex Complex::conjuge()
{
	Complex z;
	z.re = this->re;
	z.im = - this->im;
	return z;
}

Complex::~Complex()
{
	//delete this;
}

Complex Complex::operator+(const Complex & z1)
{
	Complex somme;
	somme.re = this->re + z1.re;
	somme.im = this->im + z1.im;

	return somme;
}

Complex Complex::operator+(double x)
{
	Complex somdoub;
	somdoub.re= this->re + x;
	somdoub.im = this->im;
	return somdoub;
}

Complex Complex::operator-(const Complex & z1)
{
	Complex dif;
	dif.re = this->re - z1.re;
	dif.im = this->im - z1.im;

	return dif;
}

Complex Complex::operator*(const Complex & z1)
{
	Complex mul;
	mul.re = (this->re * z1.re - this->im * z1.im);
	mul.im = (this->re * z1.im + this->im * z1.re);

	return mul;
}

bool Complex::operator==(const Complex& z1)
{
	if (this->re == z1.re && this->im == z1.im)
		return true;
	
		return false;
}
