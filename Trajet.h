/************************************************************************
            Trajet  -  Représente un trajet entre deux villes
                             -------------------
    debut                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if !defined(TRAJET_H)
#define TRAJET_H

//--------------------------------------------------- Interfaces utilisees

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
//------------------------------------------------------------------------
// Role de la classe <Trajet>
// Représente un trajet de base défini par une ville de départ et une ville d'arrivée. 
// Elle constitue une classe destinée à servir de base pour les trajets simples et composés, 
// et fournit des méthodes génériques pour manipuler ces informations.
//------------------------------------------------------------------------

class Trajet
{
    //----------------------------------------------------------------- PUBLIC

public:
    //----------------------------------------------------- Methodes publiques
    virtual void Afficher();
    // Mode d'emploi :
    // Affiche les informations de base du trajet, notamment la ville de départ
    // et la ville d'arrivée.
    // Contrat :
    //  
    char* getVilleDepart();
    // Mode d'emploi :
    // Getter qui retourne un pointeur sur le nom de la ville de départ du trajet.
    // Contrat :
    //  
    char* getVilleArrivee();
    // Mode d'emploi :
    // Getter qui retourne un pointeur sur le nom de la ville d'arrivée du trajet.
    // Contrat :
    //  

    //-------------------------------------------- Constructeurs - destructeur
    Trajet();
    // Mode d'emploi :
    // Constructeur par défaut de la classe `Trajet`. Initialise les villes
    // de départ et d'arrivée à des chaînes vides.
    // Contrat :
    //  
    Trajet(const char *_villeDepart, const char *_villeArrivee);
    // Mode d'emploi :
    // Constructeur de la classe `Trajet` qui initialise les villes de départ
    // et d'arrivée avec les valeurs fournies.
    // Contrat :
    //
    virtual ~Trajet();
    // Mode d'emploi :
    // Destructeur virtuel de la classe `Trajet`.
    // Contrat :
    //
    //------------------------------------------------------------------ PRIVE
    
protected:
    //----------------------------------------------------- Methodes protegees
    //----------------------------------------------------- Attributs proteges
    char *villeDepart; // Nom de la ville de départ du trajet.
    char *villeArrivee; // Nom de la ville d'arrivée du trajet.
};

//-------------------------------- Autres definitions dependantes de <Trajet>

#endif // TRAJET_H