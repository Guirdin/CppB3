#include "Header.h"
#include <iostream>

typedef int* ptrInt;
using ptrInt = int*;

void constructeur(ptrInt& ptr, int valeur)
{
	ptr = new int;
	*ptr = valeur;
}

void affiche(const ptrInt& ptr, int valeur) {
	cout << "\nLa valeur = " << valeur;
	cout << "\nL'adresse = " << &valeur;
	cout << "\nLa valeur pointe = " << ptr;
}

void destructeur(ptrInt& ptr) {
	//test ptr
	cout << "\n\nDestruction du pointeur\n";
	delete ptr;
	ptr = nullptr;

}

void C_2_6a() {
	cout << "\nBienvenue sur le TP 2.1a - Reference/Pointeur\n";
	ptrInt ptr_a = nullptr;
	unsigned a{10};

	cout << "\nVeuillez saisir la valeur : ";
	cin >> a;
	constructeur(ptr_a, a);
	affiche(ptr_a, a);
	destructeur(ptr_a);
	affiche(ptr_a, a);
}