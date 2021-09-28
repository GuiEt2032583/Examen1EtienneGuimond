#pragma once
#include "Arme.h"
#include <string>
#include <vector>

class Aventurier
{
public:
	Aventurier(int attaque, int force, int orDispo, std::string nom);
	~Aventurier();

	int getAtt();
	void acheterArme(Arme* arme);
	void ajouterArme(Arme* arme);
	void changerArme(Arme* arme);
	std::vector<Arme*> getVecArme();

	std::string to_string();

private:
	int attaque;
	int force;
	int orDispo;
	Arme* monArme;
	std::vector<Arme*> vecArme;

	void perdreOr(int orPerdu);

protected:
	std::string nom;
};

