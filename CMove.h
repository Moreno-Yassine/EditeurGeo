/*************************************************************************
                           CMove  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CMove> (fichier CMove.h) ------
#if ! defined ( CMOVE_H_ )
#define CMOVE_H_

//--------------------------------------------------- Interfaces utilisées
#include "CliParser.h"
#include "Commande.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CMove>
//
//
//------------------------------------------------------------------------

class CMove : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    void execute (map<string,ElemtGeo*>* mapInsert);
    void undo(map<string,ElemtGeo*>* mapInsert);
//-------------------------------------------- Constructeurs - destructeur
    CMove (string buff,int x,int y);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CMove ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
int dx;
int dy;
string object;
};

//--------------------------- Autres définitions dépendantes de <CMove>

#endif // CMOVE_H_

