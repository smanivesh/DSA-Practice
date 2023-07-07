// pattern 4
/*
 1234
 1234
 1234
*/ 

#include <iostream>
using namespace std;

int main() {
    int d;
    for(int i=0; i<3; i++)
    {
        d= 1;
        for(int j=0; j<4; j++)
        {
            
            cout<<d;
            d++;
        }
        cout<<endl;
    }
	
	return 0;
}