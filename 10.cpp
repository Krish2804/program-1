/*
Input
The first line contains an integer T, the total number of test cases. Then T lines follow, each line contains two Integers A and B.

Output
For each test case, find the remainder when A is divided by B, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 10000
Example
Input
3 
1 2
100 200
40 15

Output
1
100
10
*/

#include <iostream>
using namespace std;

int main()
{
    int i, n;
    //cout << "start" << endl;
   
    //cout<<"Enter n :"<<endl;
    cin>>n;
    int a[n],*p;
    int b[n],*x;
    int c[n];
    p=a;
    x=b;
   
    for(i=0;i<n;i++)
    {
    cin >>*(p+i)>>*(x+i);
       
    }
    for(i=0;i<n;i++)
    {
   
     c[i]=*(p+i)%*(x+i);
    }
    for(i=0;i<n;i++)
    {
        cout<<c[i]<<endl;
    }
    
}

