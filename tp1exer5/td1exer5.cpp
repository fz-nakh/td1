#include "Temps.h"
#include <iostream>
using namespace std;

int main()
{
	int h, m, s;
	Temps t(h, m, s);
	while (h < 24, m < 60, s < 60) {
		cout << "Donnez l'horaire representer par: hh:mm:ss  :";
		cin >> h >> s >> h;

	}
	char type;
	cout << "Pour afficher en anglais taper A, Pour afficher en anglais taper B";
	cin >> type;
	switch (type) {
	case 'A':
		t.heureAnglais();
		break;
	case 'F':
		t.heureFrancais();
		break;
	default:
		cout << "choix invalide" << endl;
	}
	t.compare(13, 25, 30);
}