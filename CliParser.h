/*************************************************************************
                           CliParser  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Interface de la classe <CliParser> (fichier CliParser.h) ------
#if ! defined ( CLIPARSER_H_ )
#define CLIPARSER_H_

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <map>
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <stdio.h>
#include <string.h>

#include "ElemtGeo.h"
#include "Commande.h"
#include "Aggregate.h"
//------------------------------------------------------------- Constantes
const string rectanglecmd = "R";
const string circlecmd = "C";
const string polycmd = "PL";
const string linecmd = "L";
const string aggcmd = "OA";

const char space = ' ';
const char comment = '#';

const string endcmd = "EXIT";
const string clrcmd = "CLEAR";
const string delcmd = "DELETE";
const string mvcmd = "MOVE";
const string listcmd = "LIST";
const string undocmd = "UNDO";
const string redocmd = "REDO";
const string savecmd = "SAVE";
const string loadcmd = "LOAD";

const string creation ="#New Object Created : ";
const string savefile ="#OBJECTS & CURRENT POSITIONS";
const string movement="#Object successfully moved : ";
const string errorUnknown="#UNKNOWN COMMAND";
const string errorUNDO="#UNDO IMPOSSIBLE : NO ACTIONS AVAILABLE";
const string errorREDO="#REDO IMPOSSIBLE";
const string errorArgs="#INVALID ARGUMENTS";
const string errorObject="#OBJECT NOT FOUND";
const string errorName="#NAME ALREADY EXISTS";
const string errorEmpty="#NO OBJECTS CREATED OR CURRENTLY STORED";
const string badFile="#FILE NOT FOUND OR CORRUPTED";
const string success ="OK";
const string fail ="ERR";

const unsigned int cmdroot = 0;
const unsigned int cmdargroot = 1;
const unsigned int cmdobjectname = 1;

const unsigned int cmdaggcheck = 3; // for agg creation check
const unsigned int firstobj = 2;

const unsigned int cmdmovecheck = 4;
const int cmdmovex = 2;
const int cmdmovey = 3;

const unsigned int cmdcerclecheck = 5; // for cercle creation check
const int cmdcerclex = 2;
const int cmdcercley = 3;
const int cmdcercleradius = 4;

const unsigned int cmdrectanglecheck = 6; // for rectangle creation check
const int cmdrectanglex1 = 2;
const int cmdrectangley1 = 3;
const int cmdrectanglex2 = 4;
const int cmdrectangley2 = 5;

const unsigned int cmdlinecheck = 6; // for line creation check
const int cmdlinex1 = 2;
const int cmdliney1 = 3;
const int cmdlinex2 = 4;
const int cmdliney2 = 5;

const unsigned int cmdpllinecheckmin = 4; // for polyline creation check
const unsigned int moduloparite = 2;
const unsigned int firstcoord = 2;
//------------------------------------------------------------------ Types
//------------------------------------------------------------------------
// Rôle de la classe <CliParser>
//
//
//------------------------------------------------------------------------
using namespace std;

class CliParser
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
	void InputCmd (vector<string> cmd);
	void InputParser (istream &is);
//------------------------------------------------------------------------
	vector<string> currentCommandInput;
	vector <string> currentCommentStore;
    unsigned int manualCommentCounter;
	bool exit;
    bool commentMode;
//-------------------------------------------- Constructeurs - destructeur
    CliParser ( );
    virtual ~CliParser ( );
//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées
    bool intchecker (string buff);
    bool objchecker (string buff);
//----------------------------------------------------- Attributs protégés
    vector<Commande*> executionline;
    vector<Commande*> executionlinesecondary;
    map <string,ElemtGeo*> objectStore;

    bool undoMode;
    bool loadingMode;
};

//--------------------------- Autres définitions dépendantes de <CliParser>

#endif // CLIPARSER_H_

