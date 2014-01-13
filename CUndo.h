/*************************************************************************
                           CUndo  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CUndo> (fichier CUndo.h) ------
#if ! defined ( CUNDO_H_ )
#define CUNDO_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CUndo>
//
//
//------------------------------------------------------------------------ 

class CUndo
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //


//------------------------------------------------- Surcharge d'opérateurs
    CUndo & operator = ( const CUndo & unCUndo );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CUndo ( const CUndo & unCUndo );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CUndo ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CUndo ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <CUndo>

#endif // CUNDO_H_

