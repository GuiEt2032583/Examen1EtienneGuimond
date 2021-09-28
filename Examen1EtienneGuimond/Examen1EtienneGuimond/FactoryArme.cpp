#include "FactoryArme.h"
#include "Dague.h"
#include "Epee.h"
#include "Hache.h"

static int cpt = 0;

Arme* FactoryArme::genererArme()
{
	RARETE rarete = genererRarete();
	cpt++;
	int valeur;
	int attBonus;
	std::string nom;
	switch (rarete)
	{
	case RARETE::RARETE_COMMUN:
		valeur = genererNb(0, 50);
		attBonus = 0;
		break;
	case RARETE::RARETE_RARE:
		valeur = genererNb(50, 150);
		attBonus = 5;
		break;
	case RARETE::RARETE_EPIC:
		valeur = genererNb(150, 500);
		attBonus = 25;
		break;
	case RARETE::RARETE_LEGENDAIRE:
		valeur = genererNb(500, 5000);
		attBonus = 50;
		break;
	}
	switch (genererNb(1, 3))
	{
	case 1:
		nom = "Hache " + std::to_string(cpt);
		return new Hache(cpt, attBonus, valeur, nom, rarete);
	case 2:
		nom = "Epee " + std::to_string(cpt);
		return new Epee(cpt, attBonus ,valeur, nom, rarete);
	case 3:
		nom = "Dague " + std::to_string(cpt);
		return new Dague(cpt, attBonus, valeur, nom, rarete);
	}
}

RARETE FactoryArme::genererRarete()
{
	RARETE rarete = (RARETE)genererNb(1, 4);
	return rarete;
}

int FactoryArme::genererNb(int min, int max)
{
	return(rand() % (max - min + 1)) + min;
}

