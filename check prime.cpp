// check prime
// 2, 3,5, 7

#include <iostream>
using namespace std;

int main() {
    int N, prime=0;
    cin>>N;
    if (N==1){
        cout<<"1 is not a prime number";
    }
    else{
        for(int i=2; i<N; i++)
        {
          if(N%i==0){
              cout<<"Not a Prime Number.";
              prime=1;
              break;
          }
        }
        if(prime==0){
        cout<<"Prime Number";
        }
    }
	
	return 0;
}