//convert decimal into binary using bitwise operator

#include <iostream>
#include <math.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int ans=0;
	int i=0;
	
	while(n!=0)
	{
	    int bit= n&1;
	    
	    ans= bit * pow(10, i) +ans;
	    
	    n= n>>1;
	    i++;
	    
	}
	cout<<"its binary value is " <<ans;
	return 0;
}