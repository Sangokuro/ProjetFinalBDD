#include "pch.h"
#include "map_personne.h"

map_personne::map_personne(void)
{
	this->ID = -1;
	this->Nom = "";
}

String^ map_personne::SELECT(void)
{
	return "SELECT * FROM dbo.Client";
}

String^ map_personne::INSERT(void) {
	return "INSERT INTO dbo.Client " +
		"(Nom, Prenom) " +
		"VALUES('" + this->getNom() + "','" +this->getPrenom()+"');SELECT @@IDENTITY;";
}

void map_personne::setID(int id_personne)
{
	if (id_personne > 0)
	{
		this->ID = id_personne;
	}
}

void map_personne::setNom(String^ nom)
{
	if (nom != "")
	{
		this->Nom = nom;
	}
}

void map_personne::setPrenom(String^ prenom)
{
	if (prenom != "")
	{
		this->Prenom = prenom;
	}
}

int map_personne::getId(void)
{
	return this->ID;
}

String^ map_personne::getNom(void)
{
	return this->Nom;
}

String^ map_personne::getPrenom(void)
{
	return this->Prenom;
}