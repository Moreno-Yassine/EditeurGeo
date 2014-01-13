/*************************************************************************
                           CAjouterRectangle  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CAjouterRectangle> (fichier CAjouterRectangle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CAjouterRectangle.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CAjouterRectangle::execute(map<string,ElemtGeo*>* mapInsert)
{
	FRectangle* R = new FRectangle(name,x1,y1,x2,y2);
	mapInsert->insert(make_pair(name,R));
}

void CAjouterRectangle::undo(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm)
{
	delete (*mapInsert)[name];
   mapInsert->erase(name);
   comm->erase((comm->begin())+posCommandStore);
   comm->erase((comm->begin())+posCommandStore);
}
string CAjouterRectangle::getName()
{
	return name;
}
int CAjouterRectangle::getPos()
{
	return posCommandStore;
}
//-------------------------------------------- Constructeurs - destructeur
CAjouterRectangle::CAjouterRectangle (string buff, int a, int b, int c,int d,int pos)
// Algorithme :
//
{name = buff;
x1=a;
y1=b;
x2=c;
y2=d;
posCommandStore=pos;
#ifdef MAP
    cout << "Appel au constructeur de <CAjouterRectangle>" << endl;
#endif
} //----- Fin de CAjouterRectangle


CAjouterRectangle::~CAjouterRectangle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CAjouterRectangle>" << endl;
#endif
} //----- Fin de ~CAjouterRectangle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

