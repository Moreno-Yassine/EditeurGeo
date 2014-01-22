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
#include <string>
#include <sstream>
//------------------------------------------------------ Include personnel
#include "FCercle.h"

//------------------------------------------------------------- Constantes
const string cerclename = "C";
const string espace = " ";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
string FCercle::getSaveCommande()
{
    ostringstream o;
    o << cerclename <<espace<<name<<espace<<centre.getX()<<espace<<centre.getY()<<espace<<rayon;
    return o.str();
}

void FCercle::Move(int dx,int dy)
{
    centre.Move(dx,dy);
}
string FCercle::checker()
{
    return "FCercle";
}
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

FCercle::FCercle (const FCercle &other): ElemtGeo(other.name),centre(other.centre)
// Algorithme :
//
{
	rayon = other.rayon;
#ifdef MAP
    cout << "Appel au constructeur de <FCercle>" << endl;
#endif
}

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

