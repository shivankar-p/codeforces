#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        long long v = 8;
        cin >> n;
        long long  out = 0;
        for(int i = 1; i <= n/2; i++)
        {
            out += v*i;
            v += 8;
        }
        cout << out<< endl;
    }
}