#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c, j;
    cin >> c >> j;
    int a[c], cost = 0, v[c] = {0}, c1, c2;
    for (int i = 0; i < c; i++)
        cin >> a[i];

    for (int i = 0; i < j; i++)
    {
        cin >> c1 >> c2;
        if (v[c1 - 1] == 0 && v[c2 - 1] == 0)
        {
            if (a[c1 - 1] > a[c2 - 1])
            {
                cost += a[c2 - 1];
            }
            else
            {
                cost += a[c1 - 1];
            }
            v[c1 - 1] = 1;
            v[c2 - 1] = 1;
        }
        else
        {
            if (v[c2 - 1] == 0 && v[c1 - 1] == 1)
                v[c2 - 1] = 1;
            else
                v[c1 - 1] = 1;
        }
    }
    for (int i = 0; i < c; i++)
    {
        if (v[i] == 0)
        {
            cost += a[i];
        }
    }
    cout << cost;
    return 0;
}
