/*

Input Format::::::::

The first line of the input contains ,where  is the number of integers.The next line contains  space-separated integers.

Constraints




Output Format:::::::::::::

Print the  integers of the array in the reverse order, space-separated on a single line.

Sample Input:::::::::::::

4
1 4 3 2
Sample Output:::::::::::::::

2 3 4 1

*/

#include<iostream>
using namespace std;

int main()
{

    int m,i;
    cout<<"starts!!!"<<endl;
    cin>>m;
   int a[m];
    for(i=0;i<m;i++)
    cin>>a[i];

    for(i=m-1;i>=0;i--)
    cout<<a[i]<<" ";


    // cout<<sizeof(a);
    return 0;
}