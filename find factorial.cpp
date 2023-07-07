// Find Factorial
// 5!= 1*2*3*4*5

#include <iostream>
using namespace std;

int main() {
    int N, fact=1;
    cin>>N;
    for(int i=1; i<=N; i++)
    {
     fact= fact*i;
    }
	cout<<"Factorial of N is: "<< fact;
	return 0;
}