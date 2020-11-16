
#include <iostream>
#include"Complex.h"
using namespace std;
int main()
{
	Complex z1(4, 3);
	Complex z2(8, 9);
	Complex z7(8, 9);
	Complex z4,z3,z5,z6,z9,z8;
	//afficher
	z1.afficherComplex();
	z2.afficherComplex();
	//module
	cout << "le module z1 = " << z1.Module() << endl;
	cout << "le module z2 = " << z2.Module() << endl;
	//conjuge
	z3 = z1.conjuge();
	z4 = z2.conjuge();
	z3.afficherComplex();
	z4.afficherComplex();
	//somme
	z5 = z1.operator+(z2);
	z5.afficherComplex();
	//somme double
	z8 = z1.operator+(5);
	z8.afficherComplex();
	//difference
	z6 = z1.operator-(z2);
	z6.afficherComplex();
	//egalite
	cout << z7.operator==(z2) << endl;
	//multiplication
	z9 = z1.operator*(z2);
	z9.afficherComplex();


}

