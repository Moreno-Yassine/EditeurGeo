/*************************************************************************
                           CAjouterCercle  -  description
                             -------------------
    début                : 12 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CAjouterCercle> (fichier CAjouterCercle.h) ------
#if ! defined ( CAJOUTERCERCLE_H_ )
#define CAJOUTERCERCLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "CliParser.h"
#include "Commande.h"
#include "FCercle.h"
#include <map>
#include <string>
#include <vector>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CAjouterCercle>
//
//
//------------------------------------------------------------------------

class CAjouterCercle : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
void execute(map<string,ElemtGeo*>* mapInsert);
void undo(map<string,ElemtGeo*>* mapInsert);
//-------------------------------------------- Constructeurs - destructeur
    CAjouterCercle (string buff,int x1,int x2,int r);
    virtual ~CAjouterCercle ( );
//------------------------------------------------------------------ PRIVE
protected:
//----------------------------------------------------- Attributs protégés
string name;
string ligneCommande;
string commentaireCommande;
int x1;
int x2;
int r;
};

//--------------------------- Autres définitions dépendantes de <CAjouterCercle>

#endif // CAJOUTERCERCLE_H_

