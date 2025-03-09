/*************************************************************************
                TrajetSimple  -  Représente un trajet simple
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetSimple> (fichier TrajetSimple.h) ----------------
#if !defined(TRAJETSIMPLE_H)
#define TRAJETSIMPLE_H

//--------------------------------------------------- Interfaces utilisees
#include "Trajet.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <TrajetSimple>
// La classe TrajetSimple hérite de la classe Trajet et permet de modéliser
// un trajet caractérisé par une ville de départ, une ville d'arrivée et un
// moyen de transport. Elle offre des fonctionnalités pour afficher les détails
// du trajet et accéder au moyen de transport utilisé.
//------------------------------------------------------------------------

class TrajetSimple : public Trajet
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Methodes publiques

    virtual void Afficher(); 
    // Affiche les informations du trajet simple.
    // Mode d'emploi :
    // Affiche dans la console le nom de la ville de départ, la ville d'arrivée,
    //    ainsi que le moyen de transport utilisé.
    //
    // Contrat :
    //
    char *getTransport();
    // Retourne le moyen de transport utilisé pour le trajet.
    // Mode d'emploi :
    // Renvoie un pointeur vers une chaîne de caractères contenant le moyen de transport.
    // Contrat :

    //-------------------------------------------- Constructeurs - destructeur
    TrajetSimple(char *_villeDepart, char *_villeArrivee, char *_transport);
    // Constructeur de la classe TrajetSimple.
    //  Mode d'emploi :
    //    Initialise un trajet simple avec les villes de départ et d'arrivée,
    //    ainsi que le moyen de transport. Les chaînes passées en paramètres
    //    sont copiées dans l'objet.
    // Contrat :
    //

    ~TrajetSimple();
    // Destructeur de la classe TrajetSimple.
    //  Mode d'emploi :
    // Libère la mémoire allouée dynamiquement pour les attributs transport,
    //    ville de départ et ville d'arrivée.
    //  Contrat :
    //

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Methodes protegees
    //----------------------------------------------------- Attributs proteges
    char *transport; // le moyen de transport du trajet simple
};

//-------------------------------- Autres definitions dependantes de <Xxx>

#endif // TRAJETSIMPLE_H
