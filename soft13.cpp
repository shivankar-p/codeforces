#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int dr, li, sa;
    dr = k*l/nl;
    li = c*d;
    sa = p/np;
    cout << min(min(dr, li), sa)/n << endl;
    return 0;
}