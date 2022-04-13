#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y, n, m, out = 0;
    cin >> n >> m;
    for(int x = 0; (x*x <= n)&&(x <= m); x++)
    {
        y = n-x*x;
        if(x+y*y == m) out++;
    }
    cout << out << endl;
    return 0;
}