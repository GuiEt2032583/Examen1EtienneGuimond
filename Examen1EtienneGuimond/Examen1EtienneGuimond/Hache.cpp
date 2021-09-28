#include "Hache.h"

Hache::Hache(int nb, int attBonus, int valeur, std::string nom, RARETE rarete) : Arme(nb, attaque, durabilite, valeur, poids, nom, rarete)
{
	Arme::attaque = 15 + attBonus;
	Arme::durabilite = 100;
	Arme::poids = 3.5;
}

Hache::~Hache()
{
}

std::string Hache::to_string()
{
	std::string display = Arme::to_string();
	display.append("Type d'arme : Hache\n\n");
	return display;
}

