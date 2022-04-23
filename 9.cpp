/*
Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input::::::::::
3 
12345
31203
2123
Output:::::::::::
15
9
8
*/

#include<iostream>
using namespace std;

int main()
{
    int i,k,n,m=0;
    int a[k],*p;
    p=a;
   // cout<<"start"<<endl;
       cin>>k;
     for(i=1;i<=k;i++)
    {
        cin>>*(p+i);
 
    }
     for(i=1;i<=k;i++)
    {
           m=0;
       while(*(p+i)!=0)
       {
           n=*(p+i)%10;
           *(p+i)=*(p+i)/10;
          m=m+n;
       }
        cout<<m<<endl;
        
    }

}