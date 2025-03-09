#include <iostream>
using namespace std;
#include <cstring>
#include "Trajet.h"
#include "TrajetSimple.h"
#include "TrajetCompose.h"
#include "ListeChainee.h"
#include "Element.h"
#include "Catalogue.h"

int main()
{
    int option = 1;
    ListeChainee *listeCatalogue = new ListeChainee();
    // Construction par défaut d'une liste chainée qui sera la liste des trajets dans le catalogue
    Catalogue catalogue(listeCatalogue);
    // Construction d'un catalogue à partie de la liste chaînée
    char villeDepart[50];
    char villeArrivee[50];
    char transport[50];
    int nbEscales, i;

    while (option != 0)
    {
        cout << endl
             << "---------------------------------------" << endl;
        cout << "Bienvenue a notre application !" << endl
             << endl;
        cout << "Choissisez une option: " << endl
             << endl;
        cout << "1. Afficher le catalogue de trajets" << endl;
        cout << "2. Introduire un trajet" << endl;
        cout << "3. Rechercher un parcours" << endl;
        cout << "0. Quitter le programme" << endl;
        cin >> option;
        cout << endl;
        switch (option)
        {
        case 1:
            catalogue.Afficher();
            cout << "---------------------------------------" << endl
                 << endl;
            break;
        case 2:
            cout << "1. Trajet Simple" << endl;
            cout << "2. Trajet Composé" << endl;
            cin >> option;
            if (option == 1)
            {

                cout << endl
                     << "Quelle est la ville de départ: ";
                cin >> villeDepart;
                cout << "Quelle est la ville d'arrivée: ";
                cin >> villeArrivee;
                cout << "Quel est le moyen de transport: ";
                cin >> transport;
                cout << endl
                     << "---------------------------------------" << endl
                     << endl;

                TrajetSimple *unTrajetSimple = new TrajetSimple(villeDepart, villeArrivee, transport);
                catalogue.AjouterTrajet(unTrajetSimple);
            }
            else
            {

                cout << endl
                     << "Quel est le nombre d'escales? : ";
                cin >> nbEscales;
                ListeChainee *listeTrajetsSimples = new ListeChainee();
                cout << "Quelle est la ville de départ? : ";
                cin >> villeDepart;
                for (i = 0; i <= nbEscales; i++)
                {
                    if (i == nbEscales)
                    {
                        cout << "Quelle est la ville d'arrivée? : ";
                    }
                    else
                    {
                        cout << "Quelle est l'escale #" << i + 1 << "? : ";
                    }
                    cin >> villeArrivee;
                    cout << "Quel est le moyen de transport? : ";
                    cin >> transport;
                    cout << endl;
                    TrajetSimple *trajetSimple = new TrajetSimple(villeDepart, villeArrivee, transport);
                    listeTrajetsSimples->AjouterElements(trajetSimple);
                    strcpy(villeDepart, villeArrivee);
                }
                TrajetCompose *unTrajetCompose = new TrajetCompose(listeTrajetsSimples);
                catalogue.AjouterTrajet(unTrajetCompose);
                cout << "---------------------------------------" << endl
                     << endl;
            };
            break;

        case 3:

            cout << "Quelle est la ville de départ: ";
            cin >> villeDepart;
            cout << "Quelle est la ville d'arrivée: ";
            cin >> villeArrivee;
            cout << endl;
            catalogue.RechercherParcoursSimple(villeDepart, villeArrivee);
            cout << "---------------------------------------" << endl
                 << endl;
            break;
        case 0:
            option = 0;
            break;
        default:
            cout << "Option incorrecte, essaie à nouveau" << endl
                 << endl;
            break;
        }
    }
    return 0;
}