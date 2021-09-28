#pragma once
#include "Arme.h"

class FactoryArme
{
public : 
	static Arme* genererArme();
	static int genererNb(int min, int max);

private : 
	static RARETE genererRarete();

};

