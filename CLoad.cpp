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

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CLoad::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CLoad & CLoad::operator = ( const CLoad & unCLoad )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CLoad::CLoad ( const CLoad & unCLoad )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CLoad>" << endl;
#endif
} //----- Fin de CLoad (constructeur de copie)


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


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

