#ifndef CCLEAR_H
#define CCLEAR_H

#include "Commande.h"

using namespace std;

class CClear : public Commande
{
    public :
    void execute(map<string,ElemtGeo*>* mapInsert);
	void undo(map<string,ElemtGeo*>* mapInsert);

    CClear ();
    virtual ~CClear();

    protected:
       map<string,ElemtGeo*> mapbak;

};

#endif // CCLEAR_H
