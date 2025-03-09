/************************************************************************
            Trajet  -  Représente un trajet entre deux villes
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Trajet> (fichier Trajet.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;
#include <cstring>

//------------------------------------------------------ Include personnel
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

char* Trajet::getVilleDepart()
{
    return villeDepart;
} //----- Fin de getVilleDepart

char* Trajet::getVilleArrivee()
{
    return villeArrivee;
} //----- Fin de getVilleArrivee

//-------------------------------------------- Constructeurs - destructeur

Trajet::Trajet() 
{
    char text[] = " ";
    villeDepart = text;
    villeArrivee = text;

    #ifdef MAP
        cout << "Appel au constructeur par défaut de <Trajet>" << endl;
    #endif
} //----- Fin de Trajet

Trajet::Trajet (const char *_villeDepart, const char *_villeArrivee)
{
    villeDepart = new char[strlen(_villeDepart) + 1];
    villeArrivee = new char[strlen(_villeArrivee) + 1];
    strcpy(villeDepart, _villeDepart);
    strcpy(villeArrivee, _villeArrivee);

    #ifdef MAP
        cout << "Appel au constructeur de <Trajet>" << endl;
    #endif
} //----- Fin de Trajet

Trajet::~Trajet ( )
{
    if (villeDepart != nullptr)
    {
        delete [] villeDepart;
        villeDepart = nullptr;
    }
    if (villeArrivee != nullptr)
    {
        delete [] villeArrivee;
        villeArrivee = nullptr;
    }
    #ifdef MAP
        cout << "Appel au destructeur de <Trajet>" << endl;
    #endif
} //----- Fin de ~Trajet

void Trajet::Afficher(){
    cout<<"Ville de départ : "<<villeDepart<<endl;
    cout<<"Ville d'arrivée : "<<villeArrivee<<endl;
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

