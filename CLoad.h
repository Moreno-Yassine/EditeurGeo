/*************************************************************************
                           CLoad  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CLoad> (fichier CLoad.h) ------
#if ! defined ( CLOAD_H_ )
#define CLOAD_H_

//--------------------------------------------------- Interfaces utilisées
#include "Commande.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CLoad>
//
//
//------------------------------------------------------------------------

class CLoad : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void execute(map<string,ElemtGeo*>* mapInsert);
	void undo(map<string,ElemtGeo*>* mapInsert);
//-------------------------------------------- Constructeurs - destructeur
    CLoad ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CLoad ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs protégés
    map<string,ElemtGeo*> mapbak;
};

//--------------------------- Autres définitions dépendantes de <CLoad>

#endif // CLOAD_H_

