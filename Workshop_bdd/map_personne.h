#pragma once
using namespace System;
using namespace System::Data;
using namespace System::Data::SqlClient;

ref class map_personne
{
	private:
		int ID;
		String^ Nom;
		String^ Prenom;
		String^ Date_naissance;
		String^ Date_premier_achat;
	public:
		map_personne(void);
		String^ SELECT(void); 
		String^ INSERT(void);
		String^ UPDATE(void);
		String^ DELETE(void);
		void setID(int);
		void setNom(String^);
		void setPrenom(String^);
		void setDate_naissance(String^);
		void setDate_premier_achat(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
		String^ getDate_naissance(void);
		String^ getDate_premier_achat(void);
};
