/*************************************************************************
                           ElemtGeo  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <ElemtGeo> (fichier ElemtGeo.h) ------
#if ! defined ( ELEMTGEO_H_ )
#define ELEMTGEO_H_

//--------------------------------------------------- Interfaces utilisées
#include <string>

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <ElemtGeo>
//
//
//------------------------------------------------------------------------
using namespace std;
class ElemtGeo
{
//----------------------------------------------------------------- PUBLIC
public:
//----------------------------------------------------- Méthodes publiques
	virtual void Move (int x,int y)= 0;
//-------------------------------------------- Constructeurs - destructeur
	ElemtGeo (){}
	virtual ~ElemtGeo ( );
//------------------------------------------------------------------ PRIVE
protected:
//----------------------------------------------------- Attributs protégés
    ElemtGeo(string buff);
    string name;
};

//--------------------------- Autres définitions dépendantes de <ElemtGeo>

#endif // ELEMTGEO_H_

