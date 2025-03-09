/*************************************************************************
TrajetCompose  -  Représente un trajet constitué d'une liste de trajets simples.
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <TrajetCompose> (fichier TrajetCompose.h) ----------------
#if ! defined ( TRAJETCOMPOSE_H )
#define TRAJETCOMPOSE_H

//--------------------------------------------------- Interfaces utilisees
#include "Trajet.h"
#include "ListeChainee.h" 

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <TrajetCompose>
// Représente un trajet composé constitué d'une liste chaînée de trajets simples.
// Permet d'afficher et de manipuler une séquence de trajets pour former
// un parcours complet entre une ville de départ et une ville d'arrivée.
//------------------------------------------------------------------------

class TrajetCompose : public Trajet
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
    void Afficher();
    // Mode d'emploi :
    // Affiche les différents trajets composants le trajet composé, 
    // en énumérant chaque étape de manière ordonnée.
    // Contrat :
    // Chaque trajet dans la liste chaînée doit être correctement initialisé.

//-------------------------------------------- Constructeurs - destructeur
    TrajetCompose(ListeChainee *uneListe);
    // Mode d'emploi :
    // Initialise un trajet composé à partir d'une liste chaînée de trajets.
    // Contrat :
    // La liste chaînée doit contenir au moins un trajet valide.

    ~TrajetCompose();
    // Mode d'emploi :
    // Libère la mémoire allouée pour la liste chaînée des trajets.
    // Contrat :
    // 

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs proteges
    ListeChainee *listeTrajets; // Liste chaînée contenant les trajets composants le trajet composé.
};

//-------------------------------- Autres definitions dependantes de <TrajetCompose>

#endif // TRAJETCOMPOSE_H
