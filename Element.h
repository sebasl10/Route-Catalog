/*************************************************************************
                           Element  -  Noeud d'une liste chainee
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Element> (fichier Element.h) ----------------
#if !defined(ELEMENT_H)
#define ELEMENT_H

//--------------------------------------------------- Interfaces utilisees
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <Element>
// La classe Element represente un noeud dans une liste chainee contenant
// un trajet (objet de type Trajet) et un pointeur vers le prochain Element.
//------------------------------------------------------------------------

class Element
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Methodes publiques

    Trajet * getUnTrajet();
    // Mode d'emploi :
    // Renvoie un pointeur vers le trajet stocke dans cet element.
    //
    // Contrat :
    // Aucun.

    Element * getSuivant();
    // Mode d'emploi :
    // Renvoie un pointeur vers l'element suivant de la liste chainee.
    //
    // Contrat :
    // Aucun.

    void setSuivant(Element* nouveau);
    // Mode d'emploi :
    // Definit l'element suivant dans la liste chainee.
    //
    // Contrat :
    // Le pointeur passe en parametre doit etre un objet Element valide ou NULL.

    //-------------------------------------------- Constructeurs - destructeur

    Element();
    // Mode d'emploi :
    // Constructeur par defaut. Initialise les pointeurs a NULL.
    //
    // Contrat :
    // Aucun.

    Element(Trajet *_unTrajet);
    // Mode d'emploi :
    // Constructeur initialisant l'element avec un trajet donne.
    //
    // Contrat :
    // Le pointeur passe en parametre doit etre un objet Trajet valide.

    ~Element();
    // Mode d'emploi :
    // Destructeur. Libere les ressources associees a cet element.
    //
    // Contrat :
    // Aucun.

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Methodes protegees

    //----------------------------------------------------- Attributs proteges
    Trajet *unTrajet; // Pointeur vers le trajet stocke dans cet element.
    Element *suivant; // Pointeur vers l'element suivant dans la liste chainee.
};

//-------------------------------- Autres definitions dependantes de <Element>

#endif // ELEMENT_H