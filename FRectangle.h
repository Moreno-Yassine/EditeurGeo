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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	virtual void Move(int dx, int dy);

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur


    FRectangle (string buff, int x1, int y1, int x2, int y2 );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~FRectangle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Point csg;
    Point cif;
};

//--------------------------- Autres définitions dépendantes de <FRectangle>

#endif // FRECTANGLE_H_

