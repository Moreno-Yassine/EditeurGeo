/*************************************************************************
                           FLigne  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <FLigne> (fichier FLigne.h) ------
#if ! defined ( FLIGNE_H_ )
#define FLIGNE_H_

//--------------------------------------------------- Interfaces utilisées
#include "ElemtGeo.h"
#include "Point.h"
#include <string>
#include "Commande.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <FLigne>
//
//
//------------------------------------------------------------------------

class FLigne : public ElemtGeo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	void Move(int dx, int dy);
	string getSaveCommande();
	string checker();
//-------------------------------------------- Constructeurs - destructeur
    FLigne (string buff, int x1, int y1, int x2, int y2);
    FLigne (const FLigne &other);
    virtual ~FLigne ( );
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs protégés
    Point depart;
    Point arrivee;
};

//--------------------------- Autres définitions dépendantes de <FLigne>

#endif // FLIGNE_H_

