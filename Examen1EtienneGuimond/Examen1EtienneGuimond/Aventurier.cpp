#include "Aventurier.h"
#include "FactoryArme.h"

Aventurier::Aventurier(int attaque, int force, int orDispo, std::string nom)
{
	this->attaque = attaque;
	this->force = force;
	this->orDispo = orDispo;
	this->nom = nom;
	monArme = FactoryArme::genererArme();
	vecArme.push_back(monArme);
}

Aventurier::~Aventurier()
{
	delete monArme;
	for (int i = 0; i < vecArme.size(); i++)
	{
		delete vecArme[i];
	}
	vecArme.clear();
}

int Aventurier::getAtt()
{
	return attaque + monArme->getAtt();
}

std::vector<Arme*> Aventurier::getVecArme()
{
	return vecArme;
}

void Aventurier::acheterArme(Arme* arme)
{
	perdreOr(arme->getValeur());
	ajouterArme(arme);
}

void Aventurier::ajouterArme(Arme* arme)
{
	vecArme.push_back(arme);
}

void Aventurier::changerArme(Arme* arme)
{
	attaque -= monArme->getAtt();
	monArme = arme;
	attaque += monArme->getAtt();
}

void Aventurier::perdreOr(int orPerdu)
{
	orDispo -= orPerdu;
}

std::string Aventurier::to_string()
{
	std::string info = "\n Info sur l'aventurier : \n";
	info.append("Nom : "+ nom +"\n");
	info.append("Attaque : "+ std::to_string(attaque) +"\n");
	info.append("Arme equipe : "+ monArme->getNom() +"\n");

	return info;
}