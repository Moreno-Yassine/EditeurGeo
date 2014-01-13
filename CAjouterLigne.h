/*************************************************************************
                           CAjouterLigne  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CAjouterLigne> (fichier CAjouterLigne.h) ------
#if ! defined ( CAJOUTERLIGNE_H_ )
#define CAJOUTERLIGNE_H_

//--------------------------------------------------- Interfaces utilisées
#include "CliParser.h"
#include "Commande.h"
#include "FLigne.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CAjouterLigne>
//
//
//------------------------------------------------------------------------ 

class CAjouterLigne : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	virtual void execute(map<string,ElemtGeo*>* mapInsert);
	virtual void undo(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm);
	string getName();
	int getPos();
//-------------------------------------------- Constructeurs - destructeur
    CAjouterLigne (string buff, int a, int b, int c,int d,int pos);
    virtual ~CAjouterLigne ( );

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    string name;
    int x1;
    int x2;
    int y1;
    int y2;
    int posCommandStore;
};

//--------------------------- Autres définitions dépendantes de <CAjouterLigne>

#endif // CAJOUTERLIGNE_H_

