#include "Dague.h"

Dague::Dague(int nb, int attBonus, int valeur, std::string nom, RARETE rarete) : Arme(nb, attaque, durabilite, valeur, poids, nom, rarete)
{
	Arme::attaque = 10 + attBonus;
	Arme::durabilite = 200;
	Arme::poids = 0.5;
}

Dague::~Dague()
{
}

std::string Dague::to_string()
{
	std::string display = Arme::to_string();
	display.append("Type d'arme : Dague\n\n");
	return display;
}