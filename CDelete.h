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
	void execute(map<string,ElemtGeo*>* mapInsert);
	void undo(map<string,ElemtGeo*>* mapInsert);
//-------------------------------------------- Constructeurs - destructeur
    CDelete (vector<string> buff);
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
//----------------------------------------------------- Attributs protégés
vector<string> condamnes;
vector< pair<string,ElemtGeo*> > bak;
};

//--------------------------- Autres définitions dépendantes de <CDelete>

#endif // CDELETE_H_

