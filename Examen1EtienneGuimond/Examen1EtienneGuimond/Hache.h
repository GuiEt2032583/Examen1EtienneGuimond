#pragma once
#include "Arme.h"

class Hache : 
	public Arme
{
public : 
	Hache(int nb, int attBonus, int valeur, std::string nom, RARETE rarete);
	~Hache();

	virtual std::string to_string();
};

