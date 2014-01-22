/*************************************************************************
                           CMove  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CMove> (fichier CMove.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
//------------------------------------------------------ Include personnel
#include "CMove.h"
#include "FCercle.h"
#include "FLigne.h"
#include "FPolyLigne.h"
#include "FRectangle.h"
//------------------------------------------------------------- Constantes
const string movecmd ="MOVE";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CMove::execute (map<string,ElemtGeo*>* mapInsert)
{
  (*mapInsert)[object]->Move(dx,dy);
}
void CMove::undo(map<string,ElemtGeo*>* mapInsert)
{
   (*mapInsert)[object]->Move(-dx,-dy);
}
//-------------------------------------------- Constructeurs - destructeur
CMove::CMove (string buff,int x,int y )
// Algorithme :
//
{
    dx = x;
    dy = y;
    object = buff;
#ifdef MAP
    cout << "Appel au constructeur de <CMove>" << endl;
#endif
} //----- Fin de CMove


CMove::~CMove ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CMove>" << endl;
#endif
} //----- Fin de ~CMove


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

