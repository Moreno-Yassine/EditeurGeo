/*************************************************************************
                           CAjouterAgg  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CAjouterAgg> (fichier CAjouterAgg.h) ------
#if ! defined ( CAJOUTERAGG_H_ )
#define CAJOUTERAGG_H_

//--------------------------------------------------- Interfaces utilisées
#include "Commande.h"
#include "ElemtGeo.h"
#include "Aggregate.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <CAjouterAgg>
//
//
//------------------------------------------------------------------------

class CAjouterAgg : public Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
     void execute (map<string,ElemtGeo*>* mapInsert);
     void undo(map<string,ElemtGeo*>* mapInsert);
//-------------------------------------------- Constructeurs - destructeur
    CAjouterAgg (string buff,vector<string> entry);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CAjouterAgg ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs protégés
vector<string> coalition;
string name;
string ligneCommande;
};

//--------------------------- Autres définitions dépendantes de <CAjouterAgg>

#endif // CAJOUTERAGG_H_

