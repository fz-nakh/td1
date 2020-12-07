
#include <iostream>
#include "Compte.h"
#include<string>
using namespace std;
int main()
{
	Compte A(50003, "Ahmed Amine", 8050.175);
	Compte B(50004, "salma Amine", 1000.0);
	A.m_consulterSolde();
	cout << "**********depot argent*****" << endl;
	A.m_deposerArgent(1200);
	A.m_consulterSolde();
	cout << "**********retret argent*****" << endl;
	A.m_retirerArgent(1200);
	cout << "**********compte B*****" << endl;
	A.m_consulterSolde();
	cout << "**********transferer argent vers compte B*****" << endl;
	B = A.transfererArgent(3000, B);
	B.m_consulterSolde();
	cout << "********** apres modification compte A*****" << endl;
	A.m_consulterSolde();

	return 0;
}

