#include "Marchand.h"
#include "FactoryArme.h"

Marchand::Marchand()
{
	int prixMod = 0;
	switch (FactoryArme::genererNb(1, 3))
	{
	case 1:
		humeur = HUMEUR::HUMEUR_FACHE;
		prixMod = 250;
		break;
	case 2: 
		humeur = HUMEUR::HUMEUR_NORMAL;
		prixMod = 100;
		break;
	case 3:
		humeur = HUMEUR::HUMEUR_JOYEUX;
		prixMod = -50;
		break;
	}
	remplirVecteur();
	for (int i = 0; i < vecArmeAchat.size(); i++)
	{
		vecArmeAchat[i]->addValeur(prixMod);
	}
}

Marchand::~Marchand()
{
	for (int i = 0; i < 5; i++)
	{
		delete vecArmeAchat[i];
	}
	vecArmeAchat.clear();
}

HUMEUR Marchand::getHumeur()
{
	return humeur;
}

void Marchand::vendreArme(Arme* arme)
{
	bool found = false;
	auto it = vecArmeAchat.begin();
	for (int i = 0; i < vecArmeAchat.size(); i++)
	{
		if (arme == vecArmeAchat[i])
		{
			vecArmeAchat.erase(it);
			i = vecArmeAchat.size();
			found = true;			
		}	
		if (found == false)
			it++;
	}
}

void Marchand::remplirVecteur()
{
	for (int i = 0; i < 5; i++)
	{
		vecArmeAchat.push_back(FactoryArme::genererArme());
	}
}

std::vector<Arme*> Marchand::getVecArme()
{
	return vecArmeAchat;
}