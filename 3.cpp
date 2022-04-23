
/*
Input Format::::::

Input will contain two integers, a and b, separated by a newline.

Sample Input:::::::::::

4
5
Sample Output::::::::::::

9
1
*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, a1, b1;

    cout << "Enter values :" << endl;
    cin >> a >> b;

    if (a >= 0 && b >= 0)
    {
        a1 = a + b;
        b1 = a - b;
        if (b1 < 0)
        {
            b1 = b1 * -1;
        }
        cout << a1 << endl;
        cout << b1 << endl;
    }
    else if (a >= 0 && b <= 0)
    {
        a1 = a + b;
        b1 = a - b;
        if (b1 < 0)
        {
            b1 = b1 * -1;
        }
        cout << a1 << endl;
        cout << b1 << endl;
    }
    else if (a <= 0 && b <= 0)
    {
        a1 = a + b;
        b1 = a - b;
        if (b1 < 0)
        {
            b1 = b1 * -1;
        }
        cout << a1 << endl;
        cout << b1 << endl;
    }
    else if (a <= 0 && b >= 0)
    {
        a1 = a + b;
        b1 = a - b;
        if (b1 < 0)
        {
            b1 = b1 * -1;
        }
        cout << a1 << endl;
        cout << b1 << endl;
    }

    //    a1=a+b;
    //    b1=a-b;
    //    cout<<a1<<endl;
    //    cout<<abs(b1)<<endl;

    return 0;
}
/*
#include <stdio.h>
#include <iostream>
// #include <cmath>
using namespace std;
void update(int *a, int *b);

int main()
{
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

void update(int *a, int *b)
{
    int c = *a, d = *b;
    *a = c + d;

    *b = abs(c - d);
}
*/

