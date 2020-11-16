#include "Temps.h"
#include <iostream>
#include <cmath>
using namespace std;

Temps::Temps()
{
	this->heure = heure;
	this->minute = minute;
	this->second = second;
}

Temps::Temps(const Temps& t)
{
	this->heure = t.heure;
	this->minute = t.minute;
	this->second = t.second;
}

void Temps::heureAnglais() const
{
	if (this->heure > 12) {
		cout << this->heure - 12 << ":" << this->minute << this->second << "pc" << endl;
	}
	else {
		cout << this->heure << ":" << this->minute << ":" << this->second << "am" << endl;
	}
}

void Temps::heureFrancais() const
{
	cout << this->heure << ":" << this->minute << ":" << this->second << endl;
}

bool Temps::inferieur(const Temps& t)
{
	if (this->heure < t.heure && this->minute < t.minute && this->second < t.second)
		return 0;
	else
		return 1;
}

void Temps::affichagePrefere()
{

}

void Temps::compare(int h, int m, int s)
{
	Temps t(h, m, s);
	if (inferieur(t))
		cout << "Inferieur" << endl;
	else
		cout << "Superieur" << endl;
}

Temps::~Temps()
{
	delete this;
}

Temps::Temps(int, int, int)
{
	this->heure = heure;
	this->minute = minute;
	this->second = second;
}
