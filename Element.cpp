/************************************************************************
                           Element  -  Noeud d'une liste chainee
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <Element> (fichier Element.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Element.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
Element* Element::getSuivant()
{
    return suivant;
} //----- Fin de getSuivant

void Element::setSuivant(Element * nouveau)
{
    suivant = nouveau;
} //----- Fin de setSuivant

Trajet* Element::getUnTrajet()
{
    return unTrajet;
} //----- Fin de getUnTrajet

//-------------------------------------------- Constructeurs - destructeur

Element :: Element ()
{
    unTrajet = NULL;
    suivant = NULL;

    #ifdef MAP
        cout << "Appel au constructeur par défaut de <Element>" << endl;
    #endif
} //----- Fin de Element

Element::Element (Trajet * _unTrajet)
// Algorithme :
//
{
    unTrajet = _unTrajet;
    suivant = NULL;

    #ifdef MAP
        cout << "Appel au constructeur de <Element>" << endl;
    #endif
} //----- Fin de Element


Element::~Element ( )
//
{
    #ifdef MAP
        cout << "Appel au destructeur de <Element>" << endl;
    #endif
} //----- Fin de ~Element


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

