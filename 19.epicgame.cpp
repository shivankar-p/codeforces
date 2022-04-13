#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, n;
    cin >> a >> b >> n;
    while(n > 0)
    {
        n -= __gcd(a, n);
        if(n > 0)   n -= __gcd(b, n);
        else
        {
            cout << 0 << endl;
            return 0;
        }
    }
    cout << 1 << endl;
    return 0;
}