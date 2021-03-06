#pragma once
#include "CAD.h"
#include "map_personne.h"

namespace Services {
	ref class gestionPersonnels
	{
	private:
		CAD^ cad;
		map_personne^ personne;
		DataSet^ ds;

	public:
		gestionPersonnels(void);
		DataSet^ listePersonnes(String^);
		void ajouterPersonne(String^, String^, String^, String^);
		void modifierPersonne(int, String^, String^, String^, String^);
		void supprimerPersonne(int id_client);
	};

}
