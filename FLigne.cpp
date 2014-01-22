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
#include <sstream>
#include <string>
//------------------------------------------------------ Include personnel
#include "FLigne.h"
//------------------------------------------------------------- Constantes
const string lignename = "L";
const string espace = " ";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void FLigne::Move(int dx,int dy)
{
    depart.Move(dx,dy);
    arrivee.Move(dx,dy);
}
string FLigne::getSaveCommande()
{
    ostringstream o;
    o << lignename <<espace<<name<<espace<<depart.getX()<<espace<<depart.getY()<<espace<<arrivee.getX()<<espace<<arrivee.getY();
    return o.str();
}
string FLigne::checker()
{
    return "FLigne";
}
//-------------------------------------------- Constructeurs - destructeur
FLigne::FLigne (string buff, int x1, int y1, int x2, int y2): ElemtGeo(buff),depart(x1,y1),arrivee(x2,y2)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <FLigne>" << endl;
#endif
} //----- Fin de FLigne

FLigne::FLigne (const FLigne &other): ElemtGeo(other.name),depart(other.depart),arrivee(other.arrivee)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <FLigne>" << endl;
#endif
}

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

