#pragma once
#include <string>

enum class RARETE
{
	RARETE_COMMUN = 1,
	RARETE_RARE = 2,
	RARETE_EPIC = 3,
	RARETE_LEGENDAIRE = 4
};

class Arme
{
public : 
	Arme(int nb, int attaque, int durabilite, int valeur, float poids, std::string nom, RARETE rarete);
	~Arme();

	int getValeur();
	void addValeur(int valeurAdd);
	int getAtt();
	int getNb();
	int getDur();
	float getPoids();
	std::string getNom();
	std::string getRarete();
	
	virtual std::string to_string();

private :
	int valeur;
	int nb;

protected :
	int attaque;
	int durabilite;
	float poids;
	std::string nom;
	RARETE rarete;
};

