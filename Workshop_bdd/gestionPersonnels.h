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
		void ajouterPersonne(String^, String^);
	};

}
