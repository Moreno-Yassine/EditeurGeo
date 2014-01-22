/*************************************************************************
                           CAjouterCercle  -  description
                             -------------------
    début                : 12 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CAjouterCercle> (fichier CAjouterCercle.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
//------------------------------------------------------ Include personnel
#include "CAjouterCercle.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CAjouterCercle::execute(map<string,ElemtGeo*>* mapInsert)
{
	FCercle* C = new FCercle(name,x1,x2,r);
	mapInsert->insert(make_pair(name,C));
}

void CAjouterCercle::undo(map<string,ElemtGeo*>* mapInsert)
{
   delete (*mapInsert)[name];
   mapInsert->erase(name);
}
//-------------------------------------------- Constructeurs - destructeur
CAjouterCercle::CAjouterCercle (string buff, int a, int b, int ray)
// Algorithme :
//
{
	name = buff;
	x1=a;
	x2=b;
	r=ray;
	ostringstream concat;
	concat<<"C"<<" "<<name<<" "<<x1<<" "<<x2<<" "<<r;
    ligneCommande=concat.str();
    commentaireCommande = creation + name;
#ifdef MAP
    cout << "Appel au constructeur de <CAjouterCercle>" << endl;
#endif
} //----- Fin de CAjouterCercle


CAjouterCercle::~CAjouterCercle ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CAjouterCercle>" << endl;
#endif
} //----- Fin de ~CAjouterCercle


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

