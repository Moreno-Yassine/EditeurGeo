/*************************************************************************
                           Point  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <Point> (fichier Point.h) ------
#if ! defined ( POINT_H_ )
#define POINT_H_

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Point>
//
//
//------------------------------------------------------------------------

class Point
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    int getX();
    int getY();
	 void Move(int dx, int dy);

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Point ( const Point & unPoint );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //i

    Point (int x, int y );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Point ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    int x;
    int y;
};

//--------------------------- Autres définitions dépendantes de <Point>

#endif // POINT_H_

