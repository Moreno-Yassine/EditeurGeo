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
#include "Commande.h"
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
	void Move(int dx, int dy);
	string getSaveCommande();
	string checker();
//-------------------------------------------- Constructeurs - destructeur
    FCercle ( string buff, int x, int y, int r);
    FCercle (const FCercle &other);
    virtual ~FCercle ( );
//------------------------------------------------------------------ PRIVE
protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    Point centre;
    int rayon;
};

//--------------------------- Autres définitions dépendantes de <FCercle>

#endif // FCERCLE_H_

