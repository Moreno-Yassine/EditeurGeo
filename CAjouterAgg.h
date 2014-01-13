/*************************************************************************
                           CAjouterAgg  -  description
                             -------------------
    début                : 13 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CAjouterAgg> (fichier CAjouterAgg.h) ------
#if ! defined ( CAJOUTERAGG_H_ )
#define CAJOUTERAGG_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes 

//------------------------------------------------------------------ Types 

//------------------------------------------------------------------------ 
// Rôle de la classe <CAjouterAgg>
//
//
//------------------------------------------------------------------------ 

class CAjouterAgg
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
    CAjouterAgg & operator = ( const CAjouterAgg & unCAjouterAgg );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    CAjouterAgg ( const CAjouterAgg & unCAjouterAgg );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    CAjouterAgg ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~CAjouterAgg ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE 

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <CAjouterAgg>

#endif // CAJOUTERAGG_H_

