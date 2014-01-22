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
#include <sstream>
#include <string>
//------------------------------------------------------ Include personnel
#include "FPolyLigne.h"

//------------------------------------------------------------- Constantes
const string polyname = "PL";
const string espace = " ";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void FPolyLigne::Move(int dx, int dy)
{
    for (unsigned int k=0; k!=Coord.size(); k++)
    {
        Coord[k].Move(dx,dy);
    }
}
string FPolyLigne::getSaveCommande()
{
    ostringstream o;
    o << polyname<<espace<<name;
    for (unsigned int k=0; k!=Coord.size(); k++)
    {
        o<<espace<<Coord[k].getX()<<espace<<Coord[k].getY();
    }
    return o.str();
}
string FPolyLigne::checker()
{
    return "FPolyLigne";
}
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

FPolyLigne::FPolyLigne (const FPolyLigne &other):ElemtGeo(other.name)
// Algorithme :
//
{
    Coord=other.Coord;
#ifdef MAP
    cout << "Appel au constructeur de <FPolyLigne>" << endl;
#endif
}

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

