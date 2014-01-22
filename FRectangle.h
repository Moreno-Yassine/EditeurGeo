/*************************************************************************
                           FRectangle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <FRectangle> (fichier FRectangle.h) ------
#if ! defined ( FRECTANGLE_H_ )
#define FRECTANGLE_H_

//--------------------------------------------------- Interfaces utilisées
#include "ElemtGeo.h"
#include "Point.h"
#include "Commande.h"
#include <string>
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <FRectangle>
//
//
//------------------------------------------------------------------------
using namespace std ;
class FRectangle : public ElemtGeo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    string getSaveCommande();
	virtual void Move(int dx, int dy);
	string checker();
//-------------------------------------------- Constructeurs - destructeur
    FRectangle (string buff, int x1, int y1, int x2, int y2);
    FRectangle (const FRectangle &other);
    virtual ~FRectangle ( );
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Attributs protégés
    Point csg;
    Point cif;
};

//--------------------------- Autres définitions dépendantes de <FRectangle>

#endif // FRECTANGLE_H_

