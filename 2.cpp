
/*
Input Format:::

Input will contain four integers -a,b,c,d one per line.

Output Format::::

Return the greatest of the four integers.
PS: I/O will be automatically handled.

Sample Input:::

3
4
6
5
Sample Output:::

6
*/

#include<iostream>
using namespace std;

int main()
{

    int a,b,c,d;
    cout<<"Enter values :"<<endl;
    cin>>a>>b>>c>>d;

    if((a>b)&&(a>c)&&(a>d))
    {
        cout<<a;
    }
    else if((b>a)&&(b>c)&&(b>d))
    cout<<b;

    else if((c>a)&&(c>b)&&(c>d))
    cout<<c;

    else if((d>a)&&(d>b)&&(d>c))
    cout<<d;



    return 0;
}