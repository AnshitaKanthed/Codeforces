#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t, i, a, b, m = 0, c = 0;
    while (cin >> t)
    {
        for (i = 0; i < t; i++)
        {
            cin >> a >> b;
            if (a > b)
                m++;
            else if (b > a)
                c++;
        }
        if (m > c)
            cout << "Mishka" << endl;
        else if (c > m)
            cout << "Chris" << endl;
        else
            cout << "Friendship is magic!^^" << endl;
        c = 0, m = 0;
    }

    c = 0, m = 0;
}
