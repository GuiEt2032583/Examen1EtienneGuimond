#pragma once
#include "Arme.h"
class Dague :
    public Arme
{
public:
	Dague(int nb, int attBonus, int valeur, std::string nom, RARETE rarete);
	~Dague();

	virtual std::string to_string();
};

