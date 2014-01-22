/*************************************************************************
                           CAjouterAgg  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CAjouterAgg> (fichier CAjouterAgg.cpp) -------

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <sstream>
//------------------------------------------------------ Include personnel
#include "CAjouterAgg.h"
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC
using namespace std;
//----------------------------------------------------- Méthodes publiques
    void CAjouterAgg::execute (map<string,ElemtGeo*>* mapInsert)
    {
        vector<ElemtGeo*> push;
       for (unsigned int i=0;i<coalition.size();i++)
       {
           push.push_back((mapInsert->find(coalition[i]))->second);
       }
       Aggregate* a = new Aggregate(name,push);
       mapInsert->insert(make_pair(name,a));
    }
     void  CAjouterAgg::undo(map<string,ElemtGeo*>* mapInsert)
     {
        delete (*mapInsert)[name];
        mapInsert->erase(name);
     }
//-------------------------------------------- Constructeurs - destructeur
CAjouterAgg::CAjouterAgg (string buff,vector<string> entry)
{
    name = buff;
	ostringstream concat;
	concat<<"OA"<<" "<<name;
	for (unsigned int i=0;i<entry.size();i++)
	{
		coalition.push_back(entry[i]);
		concat<<" "<<entry[i];
	}
    ligneCommande=concat.str();
#ifdef MAP
    cout << "Appel au constructeur de <CAjouterAgg>" << endl;
#endif
} //----- Fin de CAjouterAgg


CAjouterAgg::~CAjouterAgg ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <CAjouterAgg>" << endl;
#endif
} //----- Fin de ~CAjouterAgg
