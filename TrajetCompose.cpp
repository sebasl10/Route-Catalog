/************************************************************************
TrajetCompose  -  Représente un trajet constitué d'une liste de trajets simples.
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <TrajetCompose> (fichier TrajetCompose.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "TrajetCompose.h"
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

void TrajetCompose::Afficher()
{
    Element* courant = listeTrajets->getElement0();
    int i=1;
    while (courant != NULL)
    {
        cout<<"Etape #"<<i<<endl;
        courant->getUnTrajet()->Afficher();
        courant = courant->getSuivant();
        i++;
    }
} // ----- Fin de Afficher

//-------------------------------------------- Constructeurs - destructeur

TrajetCompose::TrajetCompose(ListeChainee *uneListe)
// Algorithme :
//
{
    listeTrajets = uneListe;
    villeDepart = uneListe->getElement0()->getUnTrajet()->getVilleDepart();
    Element* courant = uneListe->getElement0();
    while (courant->getSuivant() != NULL)
    {
        courant = courant->getSuivant();
    }
    villeArrivee = courant->getUnTrajet()->getVilleArrivee();

    #ifdef MAP
        cout << "Appel au constructeur de <TrajetCompose>" << endl;
    #endif
} //----- Fin de TrajetCompose


TrajetCompose::~TrajetCompose()
// Algorithme :
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetCompose>" << endl;
    #endif
    if (listeTrajets != nullptr) {
        delete listeTrajets;
        listeTrajets = nullptr; // Pour éviter un double free
    }
} //----- Fin de ~TrajetCompose

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
