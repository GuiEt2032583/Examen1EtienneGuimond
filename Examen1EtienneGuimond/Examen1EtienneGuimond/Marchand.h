#pragma once
#include "Arme.h"
#include <vector>

enum class HUMEUR
{
	HUMEUR_JOYEUX = 1,
	HUMEUR_NORMAL = 2,
	HUMEUR_FACHE = 3
};

class Marchand
{
public:
	Marchand();
	~Marchand();

	HUMEUR getHumeur();
	std::vector<Arme*> getVecArme();
	void vendreArme(Arme* arme);
	HUMEUR humeur;
	std::vector<Arme*> vecArmeAchat;

private:
	 void remplirVecteur();
};

