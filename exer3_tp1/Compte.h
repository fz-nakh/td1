#pragma once
#include<string>
#include<string.h>
#include<iostream>
using namespace std;
class Compte
{
public:
	Compte();
	Compte(double noc,string nomp,float s);
	Compte(const Compte &c);
	bool m_retirerArgent(float r);//retire du solde une valeur pass�e en param�tre et retournevrai.Si , la m�thode retourne faux
	float m_deposerArgent(float depsol);
	void m_consulterSolde()const;
	Compte transfererArgent(float s1,const Compte & c);//transf�re une somme donn�e vers un compte donn� en parametre

private:
	double   noc;
	string  nomp;
	float s;





};

