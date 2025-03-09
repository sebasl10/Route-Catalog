/************************************************************************
                TrajetSimple  -  Représente un trajet simple
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <TrajetSimple> (fichier TrajetSimple.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;
#include <cstring>

//------------------------------------------------------ Include personnel
#include "TrajetSimple.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques

char* TrajetSimple::getTransport()
{
    return transport;
} //----- Fin de getTransport

void TrajetSimple::Afficher() 
{
    Trajet::Afficher();
    cout << "Moyen de transport : " << transport << endl << endl;
} //----- Fin de Afficher

//-------------------------------------------- Constructeurs - destructeur

TrajetSimple::TrajetSimple(char *_villeDepart, char *_villeArrivee, char * _transport) : Trajet(_villeDepart, _villeArrivee)
{
    transport = new char[strlen(_transport) + 1];
    strcpy(transport, _transport);
    #ifdef MAP
        cout << "Appel au constructeur de <TrajetSimple>" << endl;
    #endif
} //------ Fin de TrajetSimple

TrajetSimple::~TrajetSimple()
{
    if (transport != nullptr )
    {
        delete [] transport;
        transport = nullptr;
    };

    #ifdef MAP
        cout << "Appel au destructeur de <TrajetSimple>" << endl;
    #endif
} //----- Fin de ~TrajetSimple

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

