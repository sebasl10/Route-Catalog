/************************************************************************
                           Catalogue  -  Gestion des trajets
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Catalogue> (fichier Catalogue.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Catalogue.h"
#include "ListeChainee.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
void Catalogue::AjouterTrajet (Trajet* unTrajet)
{
    trajets->AjouterElements(unTrajet);
} //----- Fin de AjouterTrajet

void Catalogue::Afficher(){
    Element * courant = trajets->getElement0();
    int i= 1;
    if (courant == NULL)
    {
        cout<<"Aucun trajet trouvé"<<endl<<endl;
        return;
    }
    while (courant != NULL)
    {
        cout<<"Trajet #"<<i<<endl;
        courant->getUnTrajet()->Afficher();
        courant = courant->getSuivant();
        i++;
    }
} //----- Fin de Afficher

void Catalogue::RechercherParcoursSimple(const char * ville_1, const char * ville_2)
{
    Element* trajetCourant = trajets->getElement0();
    int test = 0, i=1;
    while (trajetCourant != NULL)
    {
        if (strcmp(ville_1, trajetCourant->getUnTrajet()->getVilleDepart()) == 0 && strcmp(ville_2, trajetCourant->getUnTrajet()->getVilleArrivee()) == 0)
        {
            test = 1;
            cout<< "Option # "<< i << endl;
            trajetCourant->getUnTrajet()->Afficher();
            i++;
        }
        trajetCourant = trajetCourant->getSuivant();
    }
    if (test == 0)
    {
        cout<<"Aucun trajet trouvé dans le catalogue. "<<endl<<endl;
    };
} //----- Fin de RechercherParcoursSimple

//-------------------------------------------- Constructeurs - destructeur

Catalogue::Catalogue(ListeChainee* _trajets)
// Algorithme :
//
{
    trajets = _trajets;

    #ifdef MAP
        cout << "Appel au constructeur de <Catalogue>" << endl;
    #endif
} //----- Fin de Catalogue

Catalogue::~Catalogue ( )
// Algorithme :
//
{
    if (trajets != nullptr)
    {
        delete trajets;
        trajets = nullptr;
    }
    #ifdef MAP
        cout << "Appel au destructeur de <Catalogue>" << endl;
    #endif
} //----- Fin de ~Catalogue

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

