/*************************************************************************
                           FPolyLigne  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <FPolyLigne> (fichier FPolyLigne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "FPolyLigne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type FPolyLigne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode

void FPolyLigne::Move(int dx, int dy)
{
    for (unsigned int k=0; k!=Coord.size(); k++)
    {
        Coord[k].Move(dx,dy);
    }
}
//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



FPolyLigne::FPolyLigne ( string buff, vector<int> input):ElemtGeo(buff)
// Algorithme :
//
{
	for (unsigned int k=0;k<input.size()-1;k++)
	    {
	        Point P(input[k],input[k+1]);
	        Coord.push_back(P);
	        k++;
	    }
#ifdef MAP
    cout << "Appel au constructeur de <FPolyLigne>" << endl;
#endif
} //----- Fin de FPolyLigne


FPolyLigne::~FPolyLigne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <FPolyLigne>" << endl;
#endif
} //----- Fin de ~FPolyLigne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

