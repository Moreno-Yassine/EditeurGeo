/*************************************************************************
                           CliParser  -  description
                             -------------------
    début                : 6 janv. 2014
    copyright            : (C) 2014 par ymoreno
*************************************************************************/

//---------- Réalisation de la classe <CliParser> (fichier CliParser.cpp) -------
using namespace std;
//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
//------------------------------------------------------ Include personnel
#include "CliParser.h"
#include "Aggregate.h"
#include "FRectangle.h"
#include "FCercle.h"
#include "FLigne.h"
#include "FPolyLigne.h"
#include "CAjouterCercle.h"
#include "CAjouterLigne.h"
#include "CAjouterPolyligne.h"
#include "CAjouterRectangle.h"
#include "CAjouterAgg.h"
#include "CMove.h"
#include "CDelete.h"
#include "CClear.h"
#include "CLoad.h"
//----------------------------------------------------------------- PUBLIC

CliParser::CliParser ( )
// Algorithme :
//
{
	exit = false;
	commentMode = false;
	loadingMode = false;
	undoMode = false;
	manualCommentCounter = cmdroot;
#ifdef MAP
    cout << "Appel au constructeur de <CliParser>" << endl;
#endif
} //----- Fin de CliParser


CliParser::~CliParser ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <CliParser>" << endl;
#endif
} //----- Fin de ~CliParser

void CliParser::InputCmd (vector<string> cmd)
{
int argc = cmd.size();
string msgComment;

  switch (argc)
      {
        case 0:
            cout << fail <<endl;
            break;

        case 1: // UNITARY COMMANDS
            if (cmd[cmdroot].compare(endcmd)==0)
            {
                exit = true;
                currentCommandInput.clear();
                currentCommentStore.clear();
                objectStore.clear();
                executionline.clear();
            // final FLUSH ????????????????????????????????????
            }
            else if (cmd[cmdroot].compare(clrcmd)==0) // CLASSE CCLEAR
            {
                undoMode = false;
                CClear* c =new CClear();
                c->execute(&objectStore);
                executionline.push_back(c);
                cout << success <<endl;
            }
            else if (cmd[cmdroot].compare(listcmd)==0)
            {
                if (!objectStore.empty())
                {
                    map <string,ElemtGeo*>::iterator iter=objectStore.begin();
                    while (iter!=objectStore.end())
                    {
                    cout<<(iter->second)->getSaveCommande()<<endl;
                    iter++;
                    }
                }
                else
                {
                    cout << errorEmpty <<endl;
                }

            }
            else if (cmd[cmdroot].compare(undocmd)==0)
            {
                if (!executionline.empty())
                {
                    undoMode = true;
                    (executionlinesecondary).push_back(executionline[(executionline.size())-1]);
                    executionline[(executionline.size())-1]->undo(&objectStore);
                        //delete
                        executionline.pop_back();
                    cout << success <<endl;
                }
                else
                {
                    cout <<fail<<endl;
                    cout <<errorUNDO<<endl;
                }

            }
            else if (cmd[cmdroot].compare(redocmd)==0)
            {
                if (undoMode)
                {
                    if (!executionlinesecondary.empty())
                     {
                            executionlinesecondary[(executionlinesecondary.size())-1]->execute(&objectStore);
                            executionline.push_back(executionlinesecondary[(executionlinesecondary.size())-1]);

                        executionlinesecondary.pop_back();
                        cout << success <<endl;
                     }
                     else
                     {
                         cout << fail <<endl;
                     }
                }
                else
                {
                    cout << fail <<endl;
                    cout << errorREDO<<endl;
                }
            }

            // UNKNOWN/UNSUPPORTED COMMAND
            else
            {
                cout << fail <<endl;
                cout << errorUnknown<<endl;
            }
            break;


        default : //MULTI ARGUMENTED COMMANDS
            if (cmd[cmdroot].compare(circlecmd)==0)
           {
            	if (cmd.size()== cmdcerclecheck && !cmd[cmdobjectname].empty() && intchecker(cmd[cmdcerclex]) &&  intchecker(cmd[cmdcercley]) &&  intchecker(cmd[cmdcercleradius]))
                {
					if (objectStore.find(cmd[cmdobjectname])==objectStore.end())
					{
						undoMode = false;
						string name = cmd[cmdobjectname];
						CAjouterCercle* c = new CAjouterCercle(name,atoi(cmd[cmdcerclex].c_str()),atoi(cmd[cmdcercley].c_str()),atoi(cmd[cmdcercleradius].c_str()));
						c->execute(&objectStore);
						if (!loadingMode)
						{
						    executionline.push_back(c);
						    msgComment = creation + cmd[cmdargroot];
                            cout << msgComment<<endl;
						}
					}
					else
					{
						cout<< fail<<endl;
						cout<< errorName <<endl;
					}
                }
            	else
            	{
            		cout << fail <<endl;
					cout << errorArgs<<endl;
            	}
           }
            else if (cmd[cmdroot].compare(rectanglecmd)==0)
            {
            	if (cmd.size()== cmdrectanglecheck && !cmd[cmdobjectname].empty() && intchecker(cmd[cmdrectanglex1]) &&  intchecker(cmd[cmdrectangley1]) &&  intchecker(cmd[cmdrectanglex2]) &&  intchecker(cmd[cmdrectangley2]))
				{

					if (objectStore.find(cmd[cmdobjectname])==objectStore.end())
					{
						undoMode = false;
						CAjouterRectangle* c = new CAjouterRectangle(cmd[cmdobjectname],atoi(cmd[cmdrectanglex1].c_str()),atoi(cmd[cmdrectangley1].c_str()),atoi(cmd[cmdrectanglex2].c_str()),atoi(cmd[cmdrectangley2].c_str()));
						c->execute(&objectStore);
						if (!loadingMode)
						{
						    executionline.push_back(c);
                            msgComment = creation + cmd[cmdargroot]; // TO STORE : AFTER CHECK OF ARGS !
                            cout << msgComment<<endl;
						}
					}
					else
					{
						cout<< fail<<endl;
						cout<< errorName <<endl;
					}
				}
            	else
				{
					cout << fail <<endl;
					cout << errorArgs<<endl;
				}
            }
            else if (cmd[cmdroot].compare(linecmd)==0)
            {
            	if (cmd.size()== cmdlinecheck && !cmd[cmdobjectname].empty() && intchecker(cmd[cmdlinex1]) &&  intchecker(cmd[cmdliney1]) &&  intchecker(cmd[cmdlinex2]) &&  intchecker(cmd[cmdliney2]))
				{
					if (objectStore.find(cmd[cmdobjectname])==objectStore.end())
					{
						undoMode = false;
						CAjouterLigne* c = new CAjouterLigne(cmd[cmdobjectname],atoi(cmd[cmdlinex1].c_str()),atoi(cmd[cmdliney1].c_str()),atoi(cmd[cmdlinex2].c_str()),atoi(cmd[cmdliney2].c_str()));
						c->execute(&objectStore);
						if (!loadingMode)
						{
						    executionline.push_back(c);
                            msgComment = creation + cmd[cmdargroot]; // TO STORE : AFTER CHECK OF ARGS !
                            cout << msgComment<<endl;
						}
					}
					else
					{
						cout << fail <<endl;
						cout<< errorName <<endl;
					}
				}
            	else
				{
					cout << fail <<endl;
					cout << errorArgs<<endl;
				}
            }
            else if (cmd[cmdroot].compare(polycmd)==0)
            {
            	if (cmd.size()>= cmdpllinecheckmin && !cmd[cmdobjectname].empty() && (cmd.size()%moduloparite == 0))
				{
            		bool error = false;
            		vector<int> coord;
            		for(unsigned int i = firstcoord; i<cmd.size(); i++)
            		{
            			if(!intchecker(cmd[i]))
            			{
            				error = true;
            			}
            			coord.push_back(atoi(cmd[i].c_str()));
            		}
            		if(!error)
            		{

						if (objectStore.find(cmd[cmdobjectname])==objectStore.end())
						{
							undoMode = false;
							CAjouterPolyligne* c = new CAjouterPolyligne(cmd[cmdobjectname],coord);
							c->execute(&objectStore);
							if (!loadingMode)
                            {
						    executionline.push_back(c);
							msgComment = creation + cmd[cmdargroot]; // TO STORE : AFTER CHECK OF ARGS !
							cout << msgComment<<endl;
                            }
						}
						else
						{
							cout << fail <<endl;
							cout<< errorName <<endl;
						}
					}
            		else
					{
						cout << fail <<endl;
						cout << errorArgs<<endl;
					}
            	}
            	else
				{
					cout << fail <<endl;
					cout << errorArgs<<endl;
				}
            }
            else if (cmd[cmdroot].compare(aggcmd)==0)
            {
                if (cmd.size()>= cmdaggcheck && !cmd[cmdobjectname].empty())
				{
            		bool error = false;
            		vector<string> input;
            		for(unsigned int i = firstobj; i<cmd.size(); i++)
            		{
            			if(!objchecker(cmd[i]))
            			{
            				error = true;
            			}
            			input.push_back(cmd[i]);
            		}
            		if(!error)
            		{

						if (objectStore.find(cmd[cmdobjectname])==objectStore.end())
						{
							undoMode = false;
							CAjouterAgg* c = new CAjouterAgg(cmd[cmdobjectname],input);
							c->execute(&objectStore);
							if (!loadingMode)
                            {
						    executionline.push_back(c);
							msgComment = creation + cmd[cmdargroot]; // TO STORE : AFTER CHECK OF ARGS !
							cout << msgComment<<endl;
                            }
						}
						else
						{
							cout << fail <<endl;
							cout<< errorName <<endl;
						}
					}
            		else
					{
						cout << fail <<endl;
						cout << errorArgs<<endl;
					}
            	}
            	else
				{
					cout << fail <<endl;
					cout << errorArgs<<endl;
				}
            }
            else if (cmd[cmdroot].compare(savecmd)==0) // SAVE
            {
                ofstream os (cmd[cmdargroot].c_str());
                os << savefile <<endl;
                map <string,ElemtGeo*>::iterator iter=objectStore.begin();
                while (iter!=objectStore.end())
                {
                    if (iter!=(--objectStore.end()))
                    {
                        os<<(iter->second)->getSaveCommande()<<endl;
                        iter++;
                    }
                    else
                    {
                        os<<(iter->second)->getSaveCommande();
                        iter++;
                    }
                }
            }
            else if (cmd[cmdroot].compare(loadcmd)==0) // LOAD
            {
                loadingMode = true;
                currentCommandInput.clear();
                CLoad* c = new CLoad();
                c->execute(&objectStore);
                executionline.push_back(c);
                ifstream file (cmd[cmdargroot].c_str());
                if (file)
                {
                    while (!file.eof())
                    {
                      InputParser(file); // READING // IMPLEMENTER UN CHECKER D'OBJETS !!!!!!!!!!!!!!
                      if (!currentCommandInput.empty())
                      {
                          InputCmd(currentCommandInput); // APPLY
                      }
                    }
                    cout << success <<endl;
                }
                else
                {
                    cout << fail <<endl;
                    cout << badFile <<endl;
                }
                loadingMode = false ;
            }
            else if (cmd[cmdroot].compare(delcmd)==0)
            {
            	if (cmd.size() >= firstcoord)
            	{
            		undoMode = false;
            		unsigned int k= cmdobjectname;
            		bool error = false;
            		while (k<cmd.size() && !error)
            		{
            			if(objectStore.find(cmd[k])==objectStore.end())
            			{
            				error = true;
            			}
            			k++;
            		}
            		if (error)
            		{
            			cout << fail <<endl;
            			cout << errorObject <<space << cmd[k-1]<<endl;
            		}
            		else
            		{
            			vector<string> abattoir;
            			for (unsigned int i=cmdobjectname; i<cmd.size();i++)
            			{
            				abattoir.push_back(cmd[i]);
            			}
            			CDelete* c = new CDelete(abattoir);
						c->execute(&objectStore);
						executionline.push_back(c);
            			cout << success <<endl;
            		}
            	}
            	else
            	{
            		cout << fail <<endl;
            		cout << errorArgs<<endl;
            	}
            }
            else if (cmd[cmdroot].compare(mvcmd)==0)
            {
            	if( cmd.size() == cmdmovecheck  && !cmd[cmdobjectname].empty() && intchecker(cmd[cmdmovex])&& intchecker(cmd[cmdmovey]))
            	{
            		if(objectStore.find(cmd[cmdobjectname])!= objectStore.end())
            		{
            		    CMove* c = new CMove(cmd[cmdobjectname],atoi(cmd[cmdmovex].c_str()),atoi(cmd[cmdmovey].c_str()));
                        c->execute(&objectStore);
                        executionline.push_back(c);
            			cout << success <<endl;
            			cout << movement <<cmd[cmdobjectname]<<endl;
            		}
            		else
            		{
					cout << fail <<endl;
					cout << errorObject<<endl;
            		}
            	}
            	else
            	{
            		cout << fail <<endl;
					cout << errorArgs<<endl;
            	}

            }
            break;

      }
    currentCommandInput.clear();
    currentCommentStore.clear();

/*for (int k=0; k<executionline.size();k++)
   {
    cout << executionline[k]->getLigneCommande() << endl;
   }

    cout << objectStore.size() << endl;*/
}

void CliParser::InputParser(istream &is)
{
    string buffer;
    stringstream ss;
    getline(is,buffer);
    if (buffer.find(comment) == cmdroot)
    {
        commentMode = true;
        if (!loadingMode) // ????
        {
            vector<string> bufferComment;
            bufferComment.push_back(buffer);
        }
    }
    else
    {
        commentMode = false;
        ss << buffer;
        while (!ss.eof())
        {
            string sysbuff;
            getline(ss,sysbuff,space);
            currentCommandInput.push_back(sysbuff);
        }
    }
}

//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Méthodes protégées
bool CliParser::intchecker (string buff)
{
	const char* localchar = buff.c_str();
	for (unsigned int i=0; i< strlen(localchar);i++)
	{
		if (!isdigit(localchar[i]))
		{
			return false;
		}
	}
	return true;
}

bool CliParser::objchecker(string buff)
{
    if (objectStore.find(buff)!=objectStore.end())
    {
        return true;
    }
    else
    {
        return false;
    }
}
