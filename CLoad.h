/*************************************************************************
                           CLoad  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CLoad> (fichier CLoad.h) ------
#if ! defined ( CLOAD_H_ )
#define CLOAD_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CLoad>
//
//
//------------------------------------------------------------------------ 

class CLoad
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
    CLoad & operator = ( const CLoad & unCLoad );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CLoad ( const CLoad & unCLoad );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CLoad ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CLoad ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <CLoad>

#endif // CLOAD_H_

