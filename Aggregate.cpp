/*************************************************************************
                           Aggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <Aggregate> (fichier Aggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Aggregate.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type Aggregate::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void Aggregate::Move(int dx,int dy)
{
    for (unsigned int i=0; i<composants.size();i++)
    {
        composants[i]->Move(dx,dy);
    }
}
//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



Aggregate::Aggregate ( string buff, vector<ElemtGeo*> input)
// Algorithme :
//
{
	 name = buff;
	    for (unsigned int i=0; i<input.size();i++)
	    {
	        composants.push_back(input[i]);
	    }
#ifdef MAP
    cout << "Appel au constructeur de <Aggregate>" << endl;
#endif
} //----- Fin de Aggregate


Aggregate::~Aggregate ( )
// Algorithme :
//
{
composants.clear();
#ifdef MAP
    cout << "Appel au destructeur de <Aggregate>" << endl;
#endif
} //----- Fin de ~Aggregate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

