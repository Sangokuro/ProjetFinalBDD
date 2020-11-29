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
	public:
		map_personne(void);
		String^ SELECT(void); 
		String^ INSERT(void);
		void setID(int);
		void setNom(String^);
		void setPrenom(String^);
		int getId(void);
		String^ getNom(void);
		String^ getPrenom(void);
};
