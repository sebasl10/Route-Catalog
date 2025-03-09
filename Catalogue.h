/*************************************************************************
                           Catalogue  -  Gestion des trajets
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Catalogue> (fichier Catalogue.h) ----------------
#if ! defined ( CATALOGUE_H )
#define CATALOGUE_H

//--------------------------------------------------- Interfaces utilisees
#include "ListeChainee.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <Catalogue>
// Cette classe permet de gerer un catalogue de trajets (simples ou composes).
// Elle offre des methodes pour ajouter des trajets, afficher les trajets
// contenus dans le catalogue, et rechercher des itineraires correspondants
// a des criteres specifiques (ville de depart et ville d'arrivee).
//------------------------------------------------------------------------

class Catalogue
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques

    Catalogue (ListeChainee * trajets);
    // Mode d'emploi :
    // Construit un catalogue a partir d'une liste chainee existante de trajets.
    //
    // Contrat :
    // La liste chainee passee en parametre doit etre initialisee.

    void AjouterTrajet(Trajet * unTrajet);
    // Mode d'emploi :
    // Ajoute un trajet au catalogue.
    //
    // Contrat :
    // Le pointeur passe en parametre doit correspondre a un objet Trajet valide.

    void Afficher();
    // Mode d'emploi :
    // Affiche l'ensemble des trajets contenus dans le catalogue.
    //
    // Contrat :
    // Aucun.

    void RechercherParcoursSimple(const char * ville_1, const char * ville_2);
    // Mode d'emploi :
    // Recherche et affiche les trajets directs dans le catalogue reliant
    // ville_1 a ville_2.
    //
    // Contrat :
    // Les chaines de caracteres passees en parametre doivent etre non nulles.

    ~Catalogue ();
    // Mode d'emploi :
    // Detruit le catalogue en liberant les ressources associees.
    //
    // Contrat :
    // Aucun.

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees
//----------------------------------------------------- Attributs proteges
    ListeChainee * trajets; // Liste chainee contenant les trajets du catalogue.
};

//-------------------------------- Autres definitions dependantes de <Catalogue>

#endif // CATALOGUE_H
