// pattern 2
/*
 111
 222
 333
 444
*/ 

#include <iostream>
using namespace std;

int main() {
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
	
	return 0;
}