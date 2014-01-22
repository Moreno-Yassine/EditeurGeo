/*************************************************************************
                           Aggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <Aggregate> (fichier Aggregate.h) ------
#if ! defined ( AGGREGATE_H_ )
#define AGGREGATE_H_

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
#include "ElemtGeo.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Aggregate>
//
//
//------------------------------------------------------------------------
using namespace std;
class Aggregate : public ElemtGeo
{

//----------------------------------------------------------------- PUBLIC
public:
//----------------------------------------------------- Méthodes publiques
	void Move(int dx,int dy);
	string getSaveCommande();
	string checker();
	void Deleter(string name);
	void Adder(string name);
//-------------------------------------------- Constructeurs - destructeur
    Aggregate (string buff, vector<ElemtGeo*> input );
    virtual ~Aggregate ( );

//------------------------------------------------------------------ PRIVE
protected:
//----------------------------------------------------- Attributs protégés
    vector <ElemtGeo*> composants;
    vector <ElemtGeo*> deleted;
};

//--------------------------- Autres définitions dépendantes de <Aggregate>

#endif // AGGREGATE_H_

