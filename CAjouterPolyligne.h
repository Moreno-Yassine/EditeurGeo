/*************************************************************************
                           CAjouterPolyligne  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CAjouterPolyligne> (fichier CAjouterPolyligne.h) ------
#if ! defined ( CAJOUTERPOLYLIGNE_H_ )
#define CAJOUTERPOLYLIGNE_H_

//--------------------------------------------------- Interfaces utilisées
#include "CliParser.h"
#include "Commande.h"
#include "FPolyLigne.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CAjouterPolyligne>
//
//
//------------------------------------------------------------------------

class CAjouterPolyligne : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
void execute(map<string,ElemtGeo*>* mapInsert);
void undo(map<string,ElemtGeo*>* mapInsert);
//-------------------------------------------- Constructeurs - destructeur
    CAjouterPolyligne (string buff,vector<int> entry);

    virtual ~CAjouterPolyligne ( );

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
string name;
vector<int> coordonnees;
string ligneCommande;
string commentaireCommande;
};

//--------------------------- Autres définitions dépendantes de <CAjouterPolyligne>

#endif // CAJOUTERPOLYLIGNE_H_

