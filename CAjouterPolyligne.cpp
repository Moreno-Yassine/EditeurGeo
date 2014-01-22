/*************************************************************************
                           CAjouterPolyligne  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CAjouterPolyligne> (fichier CAjouterPolyligne.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CAjouterPolyligne.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CAjouterPolyligne::execute(map<string,ElemtGeo*>* mapInsert)
{
	FPolyLigne* pL = new FPolyLigne(name,coordonnees);
	mapInsert->insert(make_pair(name,pL));
}

void CAjouterPolyligne::undo(map<string,ElemtGeo*>* mapInsert)
{
	delete (*mapInsert)[name];
	   mapInsert->erase(name);
}

//-------------------------------------------- Constructeurs - destructeur
CAjouterPolyligne::CAjouterPolyligne (string buff,vector<int> entry)
// Algorithme :
//
{
	name = buff;
	ostringstream concat;
	concat<<"PL"<<" "<<name;
	for (unsigned int i=0;i<entry.size();i++)
	{
		coordonnees.push_back(entry[i]);
		concat<<" "<<entry[i];
	}
    ligneCommande=concat.str();
    commentaireCommande = creation + name;
#ifdef MAP
    cout << "Appel au constructeur de <CAjouterPolyligne>" << endl;
#endif
} //----- Fin de CAjouterPolyligne


CAjouterPolyligne::~CAjouterPolyligne ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CAjouterPolyligne>" << endl;
#endif
} //----- Fin de ~CAjouterPolyligne


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

