// pattern 3
/*
 1111
 222
 33
 4
*/ 

#include <iostream>
using namespace std;

int main() {
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4-i; j++)
        {
            cout<<i+1;
        }
        cout<<endl;
    }
	
	return 0;
}