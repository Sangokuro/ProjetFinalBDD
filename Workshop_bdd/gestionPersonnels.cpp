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

    void gestionPersonnels::ajouterPersonne(String^ nom, String^ prenom, String^date_naissance, String^ date_premier_achat)
    {
        int id;
        this->personne->setNom(nom);
        this->personne->setPrenom(prenom);
        this->personne->setDate_naissance(date_naissance);
        this->personne->setDate_premier_achat(date_premier_achat);
        id = this->cad->actionRowsID(this->personne->INSERT());
    }
}