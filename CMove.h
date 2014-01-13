/*************************************************************************
                           CMove  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CMove> (fichier CMove.h) ------
#if ! defined ( CMOVE_H_ )
#define CMOVE_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CMove>
//
//
//------------------------------------------------------------------------ 

class CMove
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
    CMove & operator = ( const CMove & unCMove );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CMove ( const CMove & unCMove );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CMove ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CMove ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <CMove>

#endif // CMOVE_H_

