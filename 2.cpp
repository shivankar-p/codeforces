#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, out = 0;
    unordered_map<int, int> m;
    cin >> a >> b >> c >> d;
    m[a] ++; m[b] ++; m[c] ++; m[d]++;
    for(auto x : m)
    {
        if(x.second > 1)    out += x.second-1;
    }
    cout << out << endl;
    return 0;
}