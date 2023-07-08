// Fibonacci series
//0, 1,1,2,3,5,8,13,21

#include <iostream>
using namespace std;

int main() {
    int N;
    cin>>N;
    
	int pre1=0, pre2= 1;
	cout<<pre1<<","<<pre2<<",";
	for(int i=0;i<N; i++)
	{
	    int sum= pre1+pre2;
	    cout<<sum<<",";
	    pre1= pre2;
	    pre2=sum;
	}
	return 0;
}