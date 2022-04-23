
/*

Input
This section tells you the format in which your program should receive the input.
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
This section tells us the format in which your program should give the output
For each test case, add A and B and display the sum in a new line.

Take special care for the output format; everything your program prints is considered “output”, so if you output some debugging statements like “Please enter T” or print something like: “The answer is: ”, this will be considered as part of your answer, and because it does not satisfy the output format, it will be marked wrong, even if your answer is otherwise correct!
Constraints
This section tell you the maximum and minimum possible values the variables in the problem statement can take. You do not need to check these constraints in your program. You can safely assume that the input given to your program will be in the given range of constraints.
1 ≤ T ≤ 1000
0 ≤ A,B ≤ 10000
Example
In this section examples of input and output are given in the expected format.
Input::::::::::::::
3
1 2
100 200
10 40

Output::::::::::
3
300
50



*/
#include<iostream>
using namespace std;

int main()
{
    int n,i;
    int a[n],b[n];
    //cout<<"start"<<endl;
    cin>>n;

    for(i=1;i<=n;i++)
    {
        cin>>a[i]>>b[i];

        
    }
    for(i=1;i<=n;i++)
    {
       cout<<a[i]+b[i]<<endl;


    }
}