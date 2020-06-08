#include <bits/stdc++.h>
using namespace std;

int main()
{
    std::vector<int> vect;
    std::vector<int> wait;

    std::vector<int>::iterator it;

    int n;
    int ser;

    vect.push_back(1);
    vect.push_back(2);
    wait.push_back(3);

    cin >> n;

    while (n--)
    {
        cin >> ser;

        it = std::find(vect.begin(), vect.end(), ser);
        if (it != vect.end())
        {
            if (it - vect.begin() == 0)
            {
                int temp = vect.back();
                vect.pop_back();
                vect.push_back(wait[0]);
                wait.pop_back();
                wait.push_back(temp);
            }
            else
            {
                int temp = vect[0];
                vect[0] = wait[0];
                wait.pop_back();
                wait.push_back(temp);
            }
            continue;
        }
        else
        {
            cout << "NO\n";
            return 0;
        }
    }
    cout << "YES\n";

    return 0;
}
