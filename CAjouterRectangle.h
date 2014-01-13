/*************************************************************************
                           CAjouterRectangle  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CAjouterRectangle> (fichier CAjouterRectangle.h) ------
#if ! defined ( CAJOUTERRECTANGLE_H_ )
#define CAJOUTERRECTANGLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "CliParser.h"
#include "Commande.h"
#include "FRectangle.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CAjouterRectangle>
//
//
//------------------------------------------------------------------------ 

class CAjouterRectangle : public Commande
{
	//----------------------------------------------------------------- PUBLIC

	public:
	//----------------------------------------------------- Méthodes publiques
		virtual void execute(map<string,ElemtGeo*>* mapInsert);
		virtual void undo(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm);
		string getName();
		int getPos();
	//-------------------------------------------- Constructeurs - destructeur
	    CAjouterRectangle (string buff, int a, int b, int c,int d,int pos);
	    virtual ~CAjouterRectangle ( );

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

//--------------------------- Autres définitions dépendantes de <CAjouterRectangle>

#endif // CAJOUTERRECTANGLE_H_

