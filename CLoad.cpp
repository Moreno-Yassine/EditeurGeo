/*************************************************************************
                           CLoad  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CLoad> (fichier CLoad.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CLoad.h"

//------------------------------------------------------------- Constantes
const string LD = "LOAD";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CLoad::execute(map<string,ElemtGeo*>* mapInsert)
{
    map <string,ElemtGeo*>::iterator iter=mapInsert->begin();
    while (iter!=mapInsert->end())
    {
        mapbak.insert(make_pair(iter->first,iter->second));
        iter++;
    }
}
void CLoad::undo(map<string,ElemtGeo*>* mapInsert)
{
    mapInsert->clear();
    map <string,ElemtGeo*>::iterator iter= mapbak.begin();
    while (iter!=mapbak.end())
    {
        mapInsert->insert(make_pair(iter->first,iter->second));
        iter++;
    }
}
//-------------------------------------------- Constructeurs - destructeur

CLoad::CLoad ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CLoad>" << endl;
#endif
} //----- Fin de CLoad


CLoad::~CLoad ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CLoad>" << endl;
#endif
} //----- Fin de ~CLoad

