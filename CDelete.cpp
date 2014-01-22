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
#include <typeinfo>
//------------------------------------------------------ Include personnel
#include "CDelete.h"
#include "FCercle.h"
#include "FLigne.h"
#include "FPolyLigne.h"
#include "FRectangle.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CDelete::execute(map<string,ElemtGeo*>* mapInsert) // A REVOIR
{
	for (unsigned int i=0; i<condamnes.size();i++)
	{
        bak.push_back(make_pair(condamnes[i],(*mapInsert)[condamnes[i]]));
        map<string,ElemtGeo*>::iterator it;
       it = mapInsert->begin();
       while (it!=mapInsert->end())
       {
           if (dynamic_cast<Aggregate*>(it->second))
           {
            (dynamic_cast<Aggregate*>(it->second))->Deleter(condamnes[i]);
           }
           it++;
       }
       mapInsert->erase(condamnes[i]);

	}
}
void  CDelete::undo(map<string,ElemtGeo*>* mapInsert)
{
   for (unsigned int i=0;i<bak.size();i++)
    {
        mapInsert->insert(bak[i]);
        map<string,ElemtGeo*>::iterator it;
        string backup = bak[i].first;
       it = mapInsert->begin();
       while (it!=mapInsert->end())
       {
           if (dynamic_cast<Aggregate*>(it->second))
           {
            (dynamic_cast<Aggregate*> (it->second))->Adder(backup);
           }
           it++;
       }
    }
}
//---------------------------------------resurection----- Constructeurs - destructeur
CDelete::CDelete (vector<string> buff)
// Algorithme :
//
{
	for (unsigned int i=0;i<buff.size();i++)
	{
		condamnes.push_back(buff[i]);
	}
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

