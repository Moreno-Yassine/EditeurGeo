/*************************************************************************
                           Commande  -  description
                             -------------------
    début                : 12 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <Commande> (fichier Commande.h) ------
#if ! defined ( COMMANDE_H_ )
#define COMMANDE_H_

//--------------------------------------------------- Interfaces utilisées
#include "ElemtGeo.h"
#include <vector>
#include <map>
#include <string>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

class Commande
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    virtual void execute (map<string,ElemtGeo*>* mapInsert)=0;
    virtual void undo(map<string,ElemtGeo*>* mapInsert)=0;
//-------------------------------------------- Constructeurs - destructeur
    Commande ( ){}
    virtual ~Commande ( );
};

//--------------------------- Autres définitions dépendantes de <Commande>

#endif // COMMANDE_H_

