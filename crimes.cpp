#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, in = 0;
    int x[4], y[4];
    char xi;
    cin >> n >> m;
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            cin >> xi;
            if(xi == '*')
            {
                x[in] = i+1;
                y[in] = j+1;
                //cout << x[in] << " " << y[in] << endl;
                in++;
            }
        }
    }
    /*for(int i = 0; i < 3; i++)
    {
        cout << x[i] << " " << y[i] << endl;
    }*/
    if(x[0] == x[1])
    {
        x[3] = x[2];
    }
    else if(x[0] == x[2])   x[3] = x[1];
    else x[3] = x[0];

    if(y[0] == y[1])
    {
        y[3] = y[2];
    }
    else if(y[0] == y[2])   y[3] = y[1];
    else y[3] = y[0];

    cout << x[3] << " " << y[3] << endl;

    return 0;
}