/*************************************************************************
                           FPolyLigne  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <FPolyLigne> (fichier FPolyLigne.h) ------
#if ! defined ( FPOLYLIGNE_H_ )
#define FPOLYLIGNE_H_

//--------------------------------------------------- Interfaces utilisées
#include "ElemtGeo.h"
#include "Point.h"
#include "Commande.h"
#include <string>
#include <vector>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <FPolyLigne>
//
//
//------------------------------------------------------------------------

class FPolyLigne : public ElemtGeo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    string getSaveCommande();
	void Move(int dx,int dy);
	string checker();
//-------------------------------------------- Constructeurs - destructeur
    FPolyLigne ( string buff, vector<int> input);
    FPolyLigne (const FPolyLigne &other);
    virtual ~FPolyLigne ( );
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs protégés
    vector<Point> Coord;
};

//--------------------------- Autres définitions dépendantes de <FPolyLigne>

#endif // FPOLYLIGNE_H_

