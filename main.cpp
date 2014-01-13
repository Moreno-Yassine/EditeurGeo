/*
 * main.cpp
 *
 *  Created on: 6 janv. 2014
 *      Author: ymoreno
 */

#include "CliParser.h"

using namespace std;

int main()
{
	CliParser C;
	    while (!C.exit)
	    {
	        C.InputParser(cin);
	        if (!C.commentMode)
	        {
	            C.InputCmd(C.currentCommandInput);
	        }
	        else
            {
                C.manualCommentCounter++;
            }
	    }
}

 /*string buff;
    int x,y,r;
    cin >>buff;
    cin >>x ;
    cin >>y ;
    cin >>r;
    Cercle C(buff,x,y,r);
    cout << "name " <<C.name<<endl;
    cout << "x " <<C.centre.x<<endl;
    cout << "y " <<C.centre.y<<endl;
    cout << "ray " <<C.rayon<<endl;*/

/*string buff;
    vector<int> x;
    cin >>buff;
    for (int k=0; k!=6; k++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }

    PolyLigne L(buff,x);
    cout << "size " << L.Coord.size()<<endl;*/

/*string buff;
	cin >> buff;
		const char* localchar = buff.c_str();
		for (int i=0; i< strlen(localchar);i++)
		{
			if (!isdigit(localchar[i]))
			{
				cout << "faux"<<endl;
				return false;
			}
		}
		cout << "vrai"<<endl;
		return true;*/


/**/
