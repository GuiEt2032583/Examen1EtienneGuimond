#pragma once
#include "Arme.h"

class Epee :
    public Arme
{
public:
	Epee(int nb, int attBonus, int valeur, std::string nom, RARETE rarete);
	~Epee();

	virtual std::string to_string();
};

