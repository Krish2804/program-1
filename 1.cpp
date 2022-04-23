/*
    ::::::::::::::::   Question::::::::::::::::
Input Format

You will be given two positive integers,a  and b (a<=b), separated by a newline.

Output Format

For each integer  in the inclusive interval[a,b] :

If 1<=n<=9 then print the English representation of it in lowercase. That is "one" for 1, "two" for 2 , and so on.
Else if n>9  and it is an even number, then print "even".
Else if n>9  and it is an odd number, then print "odd".
Note: 

Sample Input::::

8
11
Sample Output:::

eight
nine
even
odd
*/
#include<iostream>
using namespace std;

int main()
{
    int a=0,b=0,i;
    string c[]={" ","one","two","three","four","five","six","seven","eight","nine"};

      cout<<"Enter value of a and b :"<<endl;
   cin>>a>>b;
  
    for(i=a;i<=b;i++)
    {
       if(i<=9)
       {                                   //cout<<((i<=9) ?c[i]:((i%2==0)?"even":"odd"))<<endl;
       cout<<c[i]<<endl;
       }
       else if((i%2==0)&&i>9)
       {
           cout<<"even"<<endl;
       }
       else if((i%2!=0)&&i>9)
       {
           cout<<"odd"<<endl;
       }
    }
    
    return 0;
}
