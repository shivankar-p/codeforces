#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, el, out = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> el;
            if((i == j) || (i+j == n+1) || (i == (n+1)/2) || (j == (n+1)/2))
            {
                out += el;
                //cout << out << endl;
            }
        }
    }
    cout << out << endl;
    return 0;
}