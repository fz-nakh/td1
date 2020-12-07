#include "Compte.h"
#include <iostream>
#include<string>
using namespace std;
Compte::Compte()
{
	this->noc = 0;
	this->nomp = 0.0;
	this->s = 0.0;
}
 
Compte::Compte(double noc, string nomp, float s)
{
	this->nomp = nomp;
	this->noc = noc;
	this->s = s;
}


Compte::Compte(const Compte& c)
{
	this->nomp = c.nomp;
	this->noc = c.noc;
	this->s = c.s;

}

bool Compte::m_retirerArgent(float r)
{
	if (this->s >= r){
		cout << "le solde est suffisant"<<endl ;
		return true;
	}

	else{
		cout << "le solde est insuffisant" <<endl ;
		return false;
	}
}

float Compte::m_deposerArgent(float depsol)
{
	this->s = this->s + depsol;
	return this->s;
}

void Compte::m_consulterSolde()const
{
	cout << "Votre numero de compte: " << this->noc << endl;
	cout << "Votre Nom proprietaire: " << this->nomp << endl;
	cout << "Votre solde est: " << this->s << " DH" << endl;
}

Compte Compte::transfererArgent(float s1, const Compte& c)
{
	Compte help;
	help.noc = c.noc;
	help.nomp = c.nomp;
	help.s = c.s;
	this->s = this->s - s1;
	help.s = help.s + s1;

	cout << "solde est transfere avec succes"<<endl ;
	m_consulterSolde();
	return help;
}
