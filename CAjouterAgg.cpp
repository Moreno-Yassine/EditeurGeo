/*************************************************************************
                           CAjouterAgg  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CAjouterAgg> (fichier CAjouterAgg.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "CAjouterAgg.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type CAjouterAgg::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
CAjouterAgg & CAjouterAgg::operator = ( const CAjouterAgg & unCAjouterAgg )
// Algorithme :
//
{
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
CAjouterAgg::CAjouterAgg ( const CAjouterAgg & unCAjouterAgg )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <CAjouterAgg>" << endl;
#endif
} //----- Fin de CAjouterAgg (constructeur de copie)


CAjouterAgg::CAjouterAgg ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <CAjouterAgg>" << endl;
#endif
} //----- Fin de CAjouterAgg


CAjouterAgg::~CAjouterAgg ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CAjouterAgg>" << endl;
#endif
} //----- Fin de ~CAjouterAgg


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

