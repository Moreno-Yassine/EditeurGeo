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

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CMove::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CMove & CMove::operator = ( const CMove & unCMove )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CMove::CMove ( const CMove & unCMove )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CMove>" << endl;
#endif
} //----- Fin de CMove (constructeur de copie)


CMove::CMove ( )
// Algorithme :
//
{
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

