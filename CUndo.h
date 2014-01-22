/*************************************************************************
                           CUndo  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CUndo> (fichier CUndo.h) ------
#if ! defined ( CUNDO_H_ )
#define CUNDO_H_

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <map>
#include <string>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

#include "ElemtGeo.h"
#include "Commande.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CUndo>
//
//
//------------------------------------------------------------------------

class CUndo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
void execute(map<string,ElemtGeo*>* mapInsert,vector<Commande*>* execline,vector<Commande*>* execlinesecond);
void undo(map<string,ElemtGeo*>* mapInsert,vector<Commande*>* execline,vector<Commande*>* execlinesecond);
//-------------------------------------------- Constructeurs - destructeur
    CUndo ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CUndo ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
};

//--------------------------- Autres définitions dépendantes de <CUndo>

#endif // CUNDO_H_

