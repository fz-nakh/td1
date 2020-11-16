#pragma once
class Temps
{
private:
	int heure, minute, second;

public:
	Temps();
	Temps(int, int, int);
	Temps(const Temps& t);
	void heureAnglais()const;
	void heureFrancais()const;
	bool inferieur(const Temps& t);
	void lireHeure();
	void affichagePrefere();
	void heureSouhait();
	void compare(int h, int m, int s);
	~Temps();

};

