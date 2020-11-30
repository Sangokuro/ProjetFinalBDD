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

String^ map_personne::UPDATE(void)
{
	return "UPDATE Client " +
		"SET nom = '" + this->getNom() + "', prenom = '" + this->getPrenom() + "' " +
		"WHERE id_client = " + ID + ";";
}




String^ map_personne::DELETE(void)
{
	return "DELETE FROM dbo.Client WHERE id_client= "+ ID + " ";
}






String^ map_personne::INSERT(void) {
	return "INSERT INTO dbo.Client " +
		"(Nom, Prenom, Date_naissance, Date_premier_achat) " +
		"VALUES('" + this->getNom() + "','" +this->getPrenom()+"','"+this->getDate_naissance()+ "','" +this->getDate_premier_achat()+"');SELECT @@IDENTITY;";
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

void map_personne::setDate_naissance(String^ date_naissance)
{
	if (date_naissance != "")
	{
		this->Date_naissance = date_naissance;
	}
}

void map_personne::setDate_premier_achat(String^ date_premier_achat)
{
	if (date_premier_achat != "")
	{
		this->Date_premier_achat = date_premier_achat;
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

String^ map_personne::getDate_naissance(void)
{
	return this->Date_naissance;
}

String^ map_personne::getDate_premier_achat(void)
{
	return this->Date_premier_achat;
}