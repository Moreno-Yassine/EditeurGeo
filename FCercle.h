/*************************************************************************
                           FCercle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <FCercle> (fichier FCercle.h) ------
#if ! defined ( FCERCLE_H_ )
#define FCERCLE_H_

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include "ElemtGeo.h"
#include "Point.h"
//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <FCercle>
//
//
//------------------------------------------------------------------------ 

class FCercle : public ElemtGeo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Move(int dx, int dy);
//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur


    FCercle ( string buff, int x, int y, int r);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~FCercle ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Point centre;
    int rayon;
};

//--------------------------- Autres définitions dépendantes de <FCercle>

#endif // FCERCLE_H_

