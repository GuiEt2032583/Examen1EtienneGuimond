#include "Arme.h"
#include <string>

Arme::Arme(int nb, int attaque, int durabilite, int valeur, float poids, std::string nom, RARETE rarete)
{
	this->nb = nb;
	this->attaque = attaque;
	this->durabilite = durabilite;
	this->valeur = valeur;
	this->poids = poids;
	this->nom = nom;
	this->rarete = rarete;
}

Arme::~Arme()
{
}

int Arme::getNb()
{
	return nb;
}

int Arme::getValeur()
{
	return valeur;
}

void Arme::addValeur(int valeurAdd)
{
	if (valeurAdd >= -50 && valeurAdd <= 250)
		valeur += valeurAdd;
}

int Arme::getAtt()
{
	return attaque;
}

int Arme::getDur()
{
	return durabilite;
}

float Arme::getPoids()
{
	return poids;
}

std::string Arme::getNom()
{
	return nom;
}

std::string Arme::getRarete()
{
	switch (rarete)
	{
	case RARETE::RARETE_COMMUN : 
		return "Commun";
	case RARETE::RARETE_RARE : 
		return "Rare";
	case RARETE::RARETE_EPIC : 
		return "Epic";
	case RARETE::RARETE_LEGENDAIRE : 
		return "Legendaire";
	}
}

std::string Arme::to_string()
{
	std::string display = "\nInfo sur l'arme : \n";

	display.append("Nom : " + nom + "\n");
	display.append("Rarete : " + getRarete() + "\n");
	display.append("Attaque : " + std::to_string(getAtt()) + "\n");
	display.append("Durabilite : " + std::to_string(getDur()) + "\n");
	display.append("Poids : " + std::to_string(getPoids()) + "\n");


	return display;
}