#pragma once
class Complex
{
public :
	Complex();//constructeur de recopie d'initialisation avec 0
	Complex(double,double);//constructeur d'initialisation avec parametre
	Complex(const Complex &C);
	void afficherComplex();
	double Module();
	Complex conjuge();
	~Complex();
	//surcharge des operateurs;
	Complex operator+(const Complex & z1);
	Complex operator+( double x);
	Complex operator-(const Complex& z1);
	Complex operator*(const Complex& z1);
	bool  operator==(const Complex& z1);
private:
	double im;
	double re;
	
};

