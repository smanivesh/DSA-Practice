// pattern 5
/*
 123
 456
 789
*/ 

#include <iostream>
using namespace std;

int main() {
    int d=1;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<d;
            d++;
        }
        cout<<endl;
    }
	
	return 0;
}