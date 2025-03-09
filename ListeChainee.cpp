/************************************************************************
                ListeChainee  -  Liste chainee generique
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Realisation de la classe <ListeChainee> (fichier ListeChainee.cpp) ------------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
using namespace std;


//------------------------------------------------------ Include personnel
#include "ListeChainee.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
void ListeChainee::AjouterElements(Trajet *_unTrajet)
{
    Element *nouveau = new Element(_unTrajet);
    Element *nxt = element0;

    if (element0 == NULL)
    {
        element0 = nouveau;
        return;
    }
    while(nxt->getSuivant() != NULL)
    {
        nxt = nxt->getSuivant();
    }

    nxt->setSuivant(nouveau);
} //----- Fin de AjouterElements

Element * ListeChainee::getElement0()
{
    return element0;
} //----- Fin de getElement0

//-------------------------------------------- Constructeurs - destructeur

ListeChainee::ListeChainee()
{
    element0 = NULL;

    #ifdef MAP
    cout<< "Appel au constructeur par défaut de <ListeChainee>" << endl;
    #endif
} //----- Fin de ListeChainee

ListeChainee::ListeChainee(Element *_element0)
// Algorithme :
//
{
    element0 = _element0;

    #ifdef MAP
        cout<< "Appel au constructeur de <ListeChainee>" << endl;
    #endif
} //----- Fin de ListeChainee

ListeChainee::~ListeChainee()
//
{
    Element * courant = element0;
    while (courant != NULL)
    {
        Element* tmp = courant;
        courant = courant->getSuivant();
        if (tmp->getUnTrajet() != nullptr)
        {
            delete tmp->getUnTrajet();
        }
        if (tmp != nullptr)
        {
            delete tmp;
            tmp = nullptr;
        }
    }
    #ifdef MAP
        cout << "Appel au destructeur de <ListeChainee>" << endl;
    #endif
} //----- Fin de ~ListeChainee

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees
