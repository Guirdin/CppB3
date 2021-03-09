#pragma once
#include <iostream>
#include <cstdlib> // Permet l'utilisation de: return EXIT_SUCCESS;
#include <math.h> // Permet d'utiliser diverses méthodes de math
#include <vector> // Permet l'utilisation des vecteurs
#include <numeric>
#include <string>
#include <functional>
#include <map>

using std::vector;
using std::cout;
using std::cin;
using std::endl;
using std::ostream_iterator;
using std::vector;
using std::accumulate;
using std::map;
using std::string;
using std::function;

auto main()-> int;
auto restart(string fonction) -> void;

auto random(int min, int max) -> int;

// Exercices Partie 1
	void NombreMystere(); // TP 1.1
	// JEU421
		void Jeu421(); // TP 1.2
		auto jet_de(vector<int>& de_lance, int nb_de) -> void; // initialisation de la fonction qui réalise le lancement aléatoire des dés 
		auto jouer() -> void; // initialisation de la fonction permettant au joueur de lancer les dés par le bié d'une action
		auto verif_chiffres(int& de_restant, vector<int>& de_lance, vector<int>& main) -> void; // initialisation de la fonction vérifiant les chiffres et les ajoutant à la main si un 4,2 ou 1 est présent
		auto affiche_des(int de_restant, vector<int> de_lance, int essai_restant) -> void; // Permet l'affichage de la main du joueur
	// JEU421

	// JeuDesAllumettes
		void JeuDesAllumettes(); // TP 1.3
		auto TourDeJeu(int nb_tour) -> int;
		auto AfficherAllumettes(int Allumettes) -> void;
		auto RetirerAllumettes(int Allumettes) -> int;
	// JeuDesAllumettes

	void Syracuse(); // TP 1.4
	void Integrale(); // TP 1.5
	void Fibonacci(); // TP 1.6
	void DeveloppementLimites(); // TP 1.7
	void Maxfact(); // TP 1.8
// Exercices Partie 1

// Exercices Partie 2
	void C_2_6a(); // TP 2.1a
	void C_2_6b(); // TP 2.1b
	void C_2_6c(); // TP 2.1c
	void Macro(); // TP 2.2
	void F_Personne(); // TP 2.3
// Exercices Partie 2

// Exercices Partie 3
	void JeuDeCarte1(); // TP 3.1
	//void JeuDeCarte2(); // TP 3.2
	//void JeuDeCarteYUGIOH(); // TP 3.3
// Exercices Partie 3

namespace Header {

	inline void SecureIstream(std::istream& is,
		unsigned& val,
		const std::string& msgErreur2)
	{
		using std::cerr;
		using std::endl;
		do {
			if (!is.good()) {
				cerr << msgErreur2 << endl; std::cerr.flush();
				is.clear();
				is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			};
			is >> val;
		} while (!is.good());

	}
	// T classe avec operator>> doit etre defini
	template <typename T> void SecureIstream(std::istream& is, T& val, const std::string& msgErreur2)
	{
		using std::cerr;
		using std::endl;
		do {
			if (!is.good()) {
				cerr << msgErreur2 << endl; std::cerr.flush();
				is.clear();
				is.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			};
			is >> val;
		} while (!is.good());

	}

}