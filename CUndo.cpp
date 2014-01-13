/*************************************************************************
                           CUndo  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CUndo> (fichier CUndo.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CUndo.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CUndo::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CUndo & CUndo::operator = ( const CUndo & unCUndo )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CUndo::CUndo ( const CUndo & unCUndo )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CUndo>" << endl;
#endif
} //----- Fin de CUndo (constructeur de copie)


CUndo::CUndo ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CUndo>" << endl;
#endif
} //----- Fin de CUndo


CUndo::~CUndo ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CUndo>" << endl;
#endif
} //----- Fin de ~CUndo


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

