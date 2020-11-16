
#include "Pile.h"
#include<iostream>
using namespace std;
Pile::Pile()
{
	table = 0;
	s = -1;
	taille = 0;
}

Pile::Pile(int taille)
{
	this->taille = taille;
	table = new int[taille];
	s = -1;
}

void Pile::m_empiler(int valeur)
{
	int i = s + 1;
	if (m_pileVide()) {
		table[i] = valeur;
		s++;
	}
	else
		cout << "La pile est pleine!" << endl;
}

void Pile::m_depiler(int valeur)
{
	if (s > 0) {
		do {
			cout << table[s];
			s--;
			if (table[s] == valeur) {
				cout << table[s];
				break;
			}
		} while (s != -1);
	}
}

bool Pile::m_pileVide()
{
	if (s >= 0)
		return true;

}

void Pile::m_afficherPile() const
{
	for (int i = 0; i < taille; i++) {

		cout << table[i];
	}
	cout << endl;
}
Pile::~Pile() {
	//delete[] table;
}