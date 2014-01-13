/*************************************************************************
                           CDelete  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CDelete> (fichier CDelete.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CDelete.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CDelete::executeDELETE(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm)
{
	for (unsigned int i=0; i<resurection.size();i++)
	{
		delete (*mapInsert)[resurection[i]->getName()];
	   mapInsert->erase(resurection[i]->getName());
	   comm->erase((comm->begin())+(resurection[i]->getPos()));
	   comm->erase((comm->begin())+(resurection[i]->getPos()));
	}
}
void  CDelete::undo(map<string,ElemtGeo*>* mapInsert,vector <vector<string> >* comm)
{
	for (unsigned int i=0;i<resurection.size();i++)
	{
		resurection[i]->execute(mapInsert);
	}
}
void CDelete::fetch(vector<Commande*>* execline)
{
	for (unsigned int i=0;i<(execline->size());i++)
	{
		for (unsigned int k=0; k<condamnes.size();k++)
		{
			if ((*execline)[i]->getName().compare(condamnes[k])==0)
			{
				resurection.push_back((*execline)[i]);
				execline->erase((execline->begin())+i);
			}
		}
	}
}
int CDelete::getPos()
{
	return posCommandStore;
}
//---------------------------------------resurection----- Constructeurs - destructeur
CDelete::CDelete (vector<string> buff,int pos)
// Algorithme :
//
{
	for (unsigned int i=0;i<buff.size();i++)
	{
		condamnes.push_back(buff[i]);
	}
	posCommandStore = pos;
#ifdef MAP
    cout << "Appel au constructeur de <CDelete>" << endl;
#endif
} //----- Fin de CDelete


CDelete::~CDelete ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CDelete>" << endl;
#endif
} //----- Fin de ~CDelete


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

