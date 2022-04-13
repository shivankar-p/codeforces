#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;
    int out = 0;
    cin >> a >> b >> c >> d;
    int x = min(a, min(c, d));
    out += x*256;
    a -= x;
    c -= x;
    d -= x;
    x = min(a, b);
    out += x*32;
    cout << out << endl;
}