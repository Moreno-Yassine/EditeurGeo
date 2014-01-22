/*************************************************************************
                           CAjouterLigne  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CAjouterLigne> (fichier CAjouterLigne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CAjouterLigne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CAjouterLigne::execute(map<string,ElemtGeo*>* mapInsert)
{
	FLigne* L = new FLigne(name,x1,y1,x2,y2);
	mapInsert->insert(make_pair(name,L));
}

void CAjouterLigne::undo(map<string,ElemtGeo*>* mapInsert)
{
	delete (*mapInsert)[name];
   mapInsert->erase(name);
}
//-------------------------------------------- Constructeurs - destructeur
CAjouterLigne::CAjouterLigne (string buff, int a, int b, int c,int d)
// Algorithme :
//
{
	name = buff;
	x1=a;
	y1=b;
	x2=c;
	y2=d;
    ostringstream concat;
	concat<<"L"<<" "<<name<<" "<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
    ligneCommande=concat.str();
    commentaireCommande = creation + name;
#ifdef MAP
    cout << "Appel au constructeur de <CAjouterLigne>" << endl;
#endif
} //----- Fin de CAjouterLigne


CAjouterLigne::~CAjouterLigne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CAjouterLigne>" << endl;
#endif
} //----- Fin de ~CAjouterLigne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

