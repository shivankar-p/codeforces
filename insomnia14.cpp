#include<bits/stdc++.h>

using namespace std;

int main()
{
    int k, l, m, n, d, out = 0;
    cin >> k >> l >> m >> n >> d;
    for(int i = 1; i <= d; i++)
    {
        //cout << i % k << endl;;
        if((i % k == 0) || (i % l ==0) || (i % m == 0) || (i % n == 0)) out++;
    }
    cout << out << endl;
    return 0;
}