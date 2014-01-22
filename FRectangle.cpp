/*************************************************************************
                           FRectangle  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <FRectangle> (fichier FRectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>
#include <string>
//------------------------------------------------------ Include personnel
#include "FRectangle.h"
//------------------------------------------------------------- Constantes
const string rectanglename = "R";
const string espace = " ";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void FRectangle::Move(int dx,int dy)
{
    csg.Move(dx,dy);
    cif.Move(dx,dy);
}
string FRectangle::getSaveCommande()
{
    ostringstream o;
    o << rectanglename<<espace<<name<<espace<<csg.getX()<<espace<<csg.getY()<<espace<<cif.getX()<<espace<<cif.getY();
    return o.str();
}
string FRectangle::checker()
{
    return "FRectangle";
}
//-------------------------------------------- Constructeurs - destructeur


FRectangle::FRectangle (string buff, int x1, int y1, int x2, int y2): ElemtGeo(buff),csg(x1,y1),cif(x2,y2)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <FRectangle>" << endl;
#endif
} //----- Fin de FRectangle

FRectangle::FRectangle (const FRectangle &other): ElemtGeo(other.name),csg(other.csg),cif(other.cif)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <FRectangle>" << endl;
#endif
}

FRectangle::~FRectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <FRectangle>" << endl;
#endif
} //----- Fin de ~FRectangle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

