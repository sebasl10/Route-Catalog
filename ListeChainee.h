/*************************************************************************
                ListeChainee  -  Liste chainee generique
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <ListeChainee> (fichier ListeChainee.h) ----------------
#if ! defined ( LISTECHAINEE_H )
#define LISTECHAINEE_H

//--------------------------------------------------- Interfaces utilisees
#include "Trajet.h"
#include "Element.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <ListeChainee>
// Cette classe represente une liste chainee generique pour stocker et manipuler
// des objets de type Trajet.
// Elle permet d'ajouter des elements, d'acceder au premier element et
// d'assurer la liberation de la memoire utilisee par ses elements.
//------------------------------------------------------------------------

class ListeChainee
{
//----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Methodes publiques

    void AjouterElements(Trajet * _trajet);
    // Mode d'emploi :
    // Ajoute un trajet a la fin de la liste chainee.
    //
    // Contrat :
    // Le pointeur passe en parametre doit etre un objet Trajet valide.

    Element* getElement0(void);
    // Mode d'emploi :
    // Renvoie un pointeur vers le premier element de la liste chainee.
    //
    // Contrat :
    // Aucun.

    //-------------------------------------------- Constructeurs - destructeur

    ListeChainee();
    // Mode d'emploi :
    // Constructeur par defaut. Initialise une liste vide.
    //
    // Contrat :
    // Aucun.

    ListeChainee(Element * _element0);
    // Mode d'emploi :
    // Constructeur initialisant la liste avec un premier element donne.
    //
    // Contrat :
    // Le pointeur passe en parametre doit etre un objet Element valide ou NULL.

    ~ListeChainee();
    // Mode d'emploi :
    // Destructeur. Libere tous les elements de la liste ainsi que
    // les trajets associes.
    //
    // Contrat :
    // Aucun.

//------------------------------------------------------------------ PRIVE

private:
    //----------------------------------------------------- Methodes protegees

    //----------------------------------------------------- Attributs proteges
    Element * element0; // Pointeur vers le premier element de la liste chainee.
};

//-------------------------------- Autres definitions dependantes de <ListeChainee>

#endif // LISTECHAINEE_H