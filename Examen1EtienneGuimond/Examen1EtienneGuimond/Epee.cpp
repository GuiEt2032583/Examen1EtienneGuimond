#include "Epee.h"
Epee::Epee(int nb, int attBonus, int valeur, std::string nom, RARETE rarete) : Arme(nb, attaque, durabilite, valeur, poids, nom, rarete)
{
	Arme::attaque = 13 + attBonus;
	Arme::durabilite = 150;
	Arme::poids = 2;
}

Epee::~Epee()
{
}

std::string Epee::to_string()
{
	std::string display = Arme::to_string();
	display.append("Type d'arme : Epee\n\n");
	return display;
}
