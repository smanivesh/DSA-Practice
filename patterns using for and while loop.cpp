#include <iostream>
using namespace std;

/*
pattern 7
 1
 22
 333
*/ 
void pattern7(int N)
{
    for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }
}

/*
pattern 8
 1
 23
 456
*/ 
void pattern8(int N){
    int t=1;
    for(int i=1; i<=N; i++)
    {
        // t=i;
        for(int j=1; j<=i; j++)
        {
            cout<<t;
            t++;
        }
        cout<<endl;
    }
}

/*
pattern 9
 1
 21
 321
*/ 
void pattern9(int N)
{
    int t;
    for(int i=1; i<=N; i++)
    {
        t= i;
        for(int j=1;j<=i; j++)
        {
            cout<<t;
            t--;
        }
        cout<<endl;
    }
}

/*
pattern 10
 AAA
 BBB
 CCC
*/

void pattern10(int N)
{
    char ch='A';
    for( int i=1; i<=N; i++)
    {
        for (int j=1; j<=N; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}

/*
pattern 11
 ABC
 DEF
 GHI
*/
void pattern11(int N)
{
    char ch='A';
    for(int i=1; i<=N; i++ )
    {
        for(int j= 1; j<=N; j++)
        {
            cout<<ch;
            ch++; 
        }
        cout<<endl;
    }
}

/*
pattern 12
 ABC
 BCD
 CDE
*/
void pattern12 (int N)
{
    char ch='A';
    char t;
    for(int i=1; i<=N; i++ )
    {
        ch= ch+i-1;
        t= ch;
        for(int j= 1; j<=N; j++)
        {
            cout<<t;
            t++; 
        }
        cout<<endl;
    }
}

/*
pattern 13
 A
 BB
 CCC
*/ 
void pattern13(int N)
{
    char ch= 'A';
   for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        ch++;
    }
}

/*
pattern 14
 A
 BC
 DEF
*/ 
void pattern14(int N)
{
    char ch= 'A';
   for(int i=1; i<=N; i++)
    {
        for(int j=1; j<=i; j++)
        {
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
}

/*
pattern 15
 D
 CD
 BCD
 ABCD
*/ 
void pattern15(int N)
{
   char ch= 'A', t;
   for(int i=1; i<=N; i++)
    {
        t= ch+N-i;
        for(int j=1; j<=i; j++)
        {
            cout<< t;
            t++;
        }
        cout<<endl;
    }
}

/*
pattern 16
    *
   **
  ***
 **** 
*/ 
void pattern16(int N)
{
   int space;
   for(int i=1; i<=N; i++)
    {
        space= N-i;
        for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        int star= N-space;
        while(star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
    }
}

/*
pattern 17
****
***
**
*
*/ 
void pattern17(int N)
{
   for(int i=1; i<=N; i++)
    {
       int star= N-i+1;
        while(star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
    }
}

/*
pattern 18
****
 ***
  **
   *
*/ 
void pattern18(int N)
{
   for(int i=1; i<=N; i++)
    {
       int star= N-i+1;
       int space= N-star;
       while(space)
       {
           cout<<" ";
           space--;
       }
        while(star)
        {
            cout<<"*";
            star--;
        }
        cout<<endl;
    }
}

/*
pattern 19
1111
 222
  33
   4
*/ 
void pattern19(int N)
{
   for(int i=1; i<=N; i++)
    {
       int star= N-i+1;
       int space= N-star;
       while(space)
       {
           cout<<" ";
           space--;
       }
        while(star)
        {
            cout<<i;
            star--;
        }
        cout<<endl;
    }
}

/*
pattern 20
   1
  22
 333
4444
*/ 
void pattern20(int N)
{
   for(int i=1; i<=N; i++)
    {
       int space= N-i;
       int star= i;
       while(space)
       {
           cout<<" ";
           space--;
       }
        while(star)
        {
            cout<<i;
            star--;
        }
        cout<<endl;
    }
}


/*
pattern 21
   1
  121
 12321
1234321
*/ 

void pattern21(int N)
{
   for(int i=1; i<=N; i++)
   {
       int space= N-i;
       while(space)
       {
           cout<<" ";
           space--;
       }
       int digit=i;
       int t=1;
       while(digit>0 && t<=i)
       {
           cout<<t;
           t++;
           digit--;
       }
   
      while(t)
      {
          cout<<t;
          t--;
      }
       cout<<endl;
   }
}



int main() {
    int N;
    cin>>N;
    
    // pattern7(N);
    // pattern8(N);
    // pattern9(N);
    //pattern10(N);
    //pattern11(N);
    //pattern12(N);
    //pattern13(N);
    // pattern14(N);
    // pattern15(N);
    // pattern16(N);
    // pattern17(N);
    // pattern18(N);
    // pattern19(N);
    // pattern20(N);
    pattern21(N);
	
	return 0;
}