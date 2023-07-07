// Find sum of all even numbers 1 to N
// N=10, 2+4+6+8+10 , sum=30

#include <iostream>
using namespace std;

int main() {
    int N, sum=0;
    cin>>N;
    
    for (int i=1; i<N+1; i++)
    {
        if(i%2==0) //even
        {
            sum+= i;
        }
    }
    
	cout<<sum;
	return 0;
}
