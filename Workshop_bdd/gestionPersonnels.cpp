#include "pch.h"
#include "gestionPersonnels.h"

namespace Services {
    gestionPersonnels::gestionPersonnels(void)
    {
        this->cad = gcnew CAD();
        this->personne = gcnew map_personne();
    }

    DataSet^ gestionPersonnels::listePersonnes(String^ datableName)
    {
        this->ds = gcnew DataSet();
        this->ds = this->cad->getRows(this->personne->SELECT(), datableName);
        return this->ds;
    }

    void gestionPersonnels::ajouterPersonne(String^ nom, String^ prenom)
    {
        int id;
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        id = this->cad->actionRowsID(this->personne->INSERT());
    }
}