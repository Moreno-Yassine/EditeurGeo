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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //
	void Move(int dx,int dy);

//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur

    FPolyLigne ( string buff, vector<int> input);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~FPolyLigne ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    vector<Point> Coord;
};

//--------------------------- Autres définitions dépendantes de <FPolyLigne>

#endif // FPOLYLIGNE_H_

