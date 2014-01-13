/*************************************************************************
                           FCercle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <FCercle> (fichier FCercle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "FCercle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type FCercle::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode
void FCercle::Move(int dx,int dy)
{
    centre.Move(dx,dy);
}

//------------------------------------------------- Surcharge d'opérateurs


//-------------------------------------------- Constructeurs - destructeur


FCercle::FCercle ( string buff, int x, int y, int r): ElemtGeo(buff),centre(x,y)
// Algorithme :
//
{
	rayon = r;
#ifdef MAP
    cout << "Appel au constructeur de <FCercle>" << endl;
#endif
} //----- Fin de FCercle


FCercle::~FCercle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <FCercle>" << endl;
#endif
} //----- Fin de ~FCercle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

