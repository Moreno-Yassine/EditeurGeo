/*************************************************************************
                           ElemtGeo  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <ElemtGeo> (fichier ElemtGeo.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "ElemtGeo.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

string ElemtGeo::getName()
{
    return name;
}
//-------------------------------------------- Constructeurs - destructeur

ElemtGeo::ElemtGeo (string buff)
// Algorithme :
//
{
	name = buff;
#ifdef MAP
    cout << "Appel au constructeur de <ElemtGeo>" << endl;
#endif
} //----- Fin de ElemtGeo

ElemtGeo::ElemtGeo(const ElemtGeo &other)
{
    name = other.name;
}
ElemtGeo::~ElemtGeo ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <ElemtGeo>" << endl;
#endif
} //----- Fin de ~ElemtGeo


