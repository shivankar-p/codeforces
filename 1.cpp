#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, out = 0, cnt;
    cin >> n;
    while(n--)
    {
        cnt = 0;
        cin >> a;
        if(a == 1) cnt++;
        cin >> b;
        if(b == 1) cnt++;
        cin >> c;
        if(c == 1) cnt++;
        if(cnt >= 2)    out++;
    }
    cout << out << endl;
    return 0;
}