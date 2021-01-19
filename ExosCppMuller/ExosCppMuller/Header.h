#pragma once
#include <iostream>
#include <cstdlib> // Permet l'utilisation de: return EXIT_SUCCESS;
#include <math.h> // Permet d'utiliser diverses m�thodes de math
#include <vector> // Permet l'utilisation des vecteurs
#include <numeric>
#include <string>
#include <functional>

// using namespace std; permet de ne pas sp�cifier std et est une mauvaise pratique
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream_iterator;
using std::vector; // Permet l'utilisation des vecteurs
using std::accumulate;

auto random(int min, int max) -> int;

void NombreMystere();
void Integrale();
void Fibonacci();
void Syracuse();
void DeveloppementLimites();

// JEU421
	void Jeu421();
	auto jet_de(int de_restant, vector<int>& de_lance) -> void; // initialisation de la fonction qui r�alise le lancement al�atoire des d�s 
	auto jouer() -> void; // initialisation de la fonction permettant au joueur de lancer les d�s par le bi� d'une action
	auto verif_chiffres(int& de_restant, vector<int>& de_lance, vector<int>& main) -> void; // initialisation de la fonction v�rifiant les chiffres et les ajoutant � la main si un 4,2 ou 1 est pr�sent
	auto affiche_des(int de_restant, vector<int> de_lance, int essai_restant) -> void; // Permet l'affichage de la main du joueur
// JEU421

// JeuDesAllumettes
	void JeuDesAllumettes();
	auto Tour_De_Jeu(int nb_tour, int Joueur) -> int;
	auto Retirer_Allumettes(int Allumettes) -> int;
	auto Affiche_Allumettes(int Allumettes) -> void;
// JeuDesAllumettes

