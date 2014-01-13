/*************************************************************************
                           FLigne  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <FLigne> (fichier FLigne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "FLigne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void FLigne::Move(int dx,int dy)
{
    depart.Move(dx,dy);
    arrivee.Move(dx,dy);
}
// type FLigne::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs



//-------------------------------------------- Constructeurs - destructeur



FLigne::FLigne (string buff, int x1, int y1, int x2, int y2): ElemtGeo(buff),depart(x1,y1),arrivee(x2,y2)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <FLigne>" << endl;
#endif
} //----- Fin de FLigne


FLigne::~FLigne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <FLigne>" << endl;
#endif
} //----- Fin de ~FLigne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

