#pragma once
#include <iostream>
#include <cstdlib> // Permet l'utilisation de: return EXIT_SUCCESS;
#include <math.h> // Permet d'utiliser diverses méthodes de math
#include <vector> // Permet l'utilisation des vecteurs
#include <numeric>
#include <string>
#include <functional>
#define PI 3.14159265358979224

// using namespace std; permet de ne pas spécifier std et est une mauvaise pratique
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::ostream_iterator;
using std::vector; // Permet l'utilisation des vecteurs
using std::accumulate;

auto random(int min, int max) -> int;

void NombreMystere(); // TP 1.1
// JEU421
	void Jeu421(); // TP 1.2
	auto jet_de(vector<int>& de_lance) -> void; // initialisation de la fonction qui réalise le lancement aléatoire des dés 
	auto jouer() -> void; // initialisation de la fonction permettant au joueur de lancer les dés par le bié d'une action
	auto verif_chiffres(int& de_restant, vector<int>& de_lance, vector<int>& main) -> void; // initialisation de la fonction vérifiant les chiffres et les ajoutant à la main si un 4,2 ou 1 est présent
	auto affiche_des(int de_restant, vector<int> de_lance, int essai_restant) -> void; // Permet l'affichage de la main du joueur
// JEU421

// JeuDesAllumettes
	void JeuDesAllumettes(); // TP 1.3
	auto Tour_De_Jeu(int nb_tour) -> int;
	auto Retirer_Allumettes(int Allumettes) -> int;
	auto Affiche_Allumettes(int Allumettes) -> void;
// JeuDesAllumettes

void Syracuse(); // TP 1.4
void Integrale(); // TP 1.5
void Fibonacci(); // TP 1.6
void DeveloppementLimites(); // TP 1.7
void Maxfact(); // TP 1.8





