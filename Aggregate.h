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
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

	void Move(int dx,int dy);
//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur


    Aggregate (string buff, vector<ElemtGeo*> input );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Aggregate ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    vector <ElemtGeo*> composants;
    string name;
};

//--------------------------- Autres définitions dépendantes de <Aggregate>

#endif // AGGREGATE_H_

