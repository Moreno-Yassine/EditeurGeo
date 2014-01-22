/*************************************************************************
                           Aggregate  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <Aggregate> (fichier Aggregate.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <sstream>
//------------------------------------------------------ Include personnel
#include "Aggregate.h"
//------------------------------------------------------------- Constantes
const string espace = " ";
const string cmd= "OA";
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void Aggregate::Move(int dx,int dy)
{
    for (unsigned int i=0; i<composants.size();i++)
    {
        composants[i]->Move(dx,dy);
    }
}
string Aggregate::getSaveCommande()
{
    ostringstream o;
    o <<cmd<<espace<<name;
    for (unsigned int k=0; k<composants.size(); k++)
    {
        o<<espace<<composants[k]->getName();
    }
    return o.str();
}
string Aggregate::checker()
{
    return cmd;
}
void Aggregate::Deleter(string name)
{
    for (unsigned int k=0; k<composants.size(); k++)
    {
        if (composants[k]->getName()== name)
        {
            deleted.push_back(composants[k]);
           composants.erase(composants.begin()+k);
        }
    }
}
void Aggregate::Adder(string name)
{
    for (unsigned int k=0; k<deleted.size(); k++)
    {
        if (deleted[k]->getName()== name)
        {
            composants.push_back(deleted[k]);
           deleted.erase(deleted.begin()+k);
        }
    }
}
//-------------------------------------------- Constructeurs - destructeur
Aggregate::Aggregate ( string buff, vector<ElemtGeo*> input)
// Algorithme :
//
{
	 name = buff;
	    for (unsigned int i=0; i<input.size();i++)
	    {
	        composants.push_back(input[i]);
	    }
#ifdef MAP
    cout << "Appel au constructeur de <Aggregate>" << endl;
#endif
} //----- Fin de Aggregate


Aggregate::~Aggregate ( )
// Algorithme :
//
{
composants.clear();
#ifdef MAP
    cout << "Appel au destructeur de <Aggregate>" << endl;
#endif
} //----- Fin de ~Aggregate


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées

