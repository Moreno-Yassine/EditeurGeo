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
const int root = 0;
//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
void CUndo::execute(map<string,ElemtGeo*>* mapInsert,vector<Commande*>* execline,vector<Commande*>* execlinesecond)
{
    (*execlinesecond).push_back((*execline)[((*execline).size())-1]);
   if( (*execline)[(execline->size())-1]->getLigneCommande()!="DELETE")
    {
        (*execline)[((*execline).size())-1]->undo(mapInsert);
    }
    else
    {
      (*execline)[((*execline).size())-1]->undoDELETE(mapInsert,execline);
    }

    (*execline).pop_back();
    /*for (unsigned int k=0; k<(*execline).size();k++)
    {
        if ((*execlinesecond)[((*execlinesecond).size())-1]->getLigneCommande()==(*execline)[k]->getLigneCommande())
        {
            (*execline).erase((*execline).begin()+k);
        }
    }*/
}

void CUndo::undo(map<string,ElemtGeo*>* mapInsert,vector<Commande*>* execline,vector<Commande*>* execlinesecond)
{
    string buff;
    buff = (*execlinesecond)[((*execlinesecond).size())-1]->getName();cout<<buff<<endl;
    if (buff=="DELETE")
        {
           (*execlinesecond)[((*execlinesecond).size())-1]->executeDELETE(mapInsert,execline);
            execline->push_back((*execlinesecond)[((*execlinesecond).size())-1]);
        }
    else
    {
        (*execlinesecond)[((*execlinesecond).size())-1]->execute(mapInsert);
        execline->push_back((*execlinesecond)[((*execlinesecond).size())-1]);
    }
    (*execlinesecond).pop_back();
}

//-------------------------------------------- Constructeurs - destructeur

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

