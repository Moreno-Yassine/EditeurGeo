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
	virtual void execute(map<string,ElemtGeo*>* mapInsert);
	virtual void undo(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm);
	string getName();
	int getPos();
//-------------------------------------------- Constructeurs - destructeur
    CAjouterPolyligne (string buff,vector<int> entry,int pos);

    virtual ~CAjouterPolyligne ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
string name;
vector<int> coordonnees;
int posCommandStore;
};

//--------------------------- Autres définitions dépendantes de <CAjouterPolyligne>

#endif // CAJOUTERPOLYLIGNE_H_

