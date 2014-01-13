/*************************************************************************
                           CDelete  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CDelete> (fichier CDelete.h) ------
#if ! defined ( CDELETE_H_ )
#define CDELETE_H_

//--------------------------------------------------- Interfaces utilisées
#include "CliParser.h"
#include "Commande.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CDelete>
//
//
//------------------------------------------------------------------------ 

class CDelete : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	virtual void execute(map<string,ElemtGeo*>* mapInsert){};
	void executeDELETE (map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm);
	virtual void undo(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm);
	void fetch(vector<Commande*>* execline);
	string getName(){}
	int getPos();
//-------------------------------------------- Constructeurs - destructeur
    CDelete (vector<string> buff,int pos);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CDelete ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
vector<string> condamnes;
vector<Commande*> resurection;
int posCommandStore;
};

//--------------------------- Autres définitions dépendantes de <CDelete>

#endif // CDELETE_H_

