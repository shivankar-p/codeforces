#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, c;
    cin >> n >> m;
    n++;
    while(n <= m)
    {
        c = 0;
        for(int i = 1; i <= n; i++)
        {
            if(n%i==0)  c++;
        }
        if(c == 2)
        {
            if(m == n)
            {
                cout<< "YES" << endl;
                return 0;
            }
            else
            {
                cout << "NO" << endl;
                return 0;
            }
        }
        n++;

    }
    cout << "NO" << endl;
    return 0;
}