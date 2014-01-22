#include "CClear.h"

const string CL ="CLEAR";

using namespace std;

void CClear::execute(map<string,ElemtGeo*>* mapInsert)
{
    map <string,ElemtGeo*>::iterator iter=mapInsert->begin();
    while (iter!=mapInsert->end())
    {
        mapbak.insert(make_pair(iter->first,iter->second));
        iter++;
    }
    mapInsert->clear();
}

void CClear::undo(map<string,ElemtGeo*>* mapInsert)
{
     map <string,ElemtGeo*>::iterator iter= mapbak.begin();
    while (iter!=mapbak.end())
    {
        mapInsert->insert(make_pair(iter->first,iter->second));
        iter++;
    }
}

CClear::CClear()
{
}

CClear::~CClear()
{
}
