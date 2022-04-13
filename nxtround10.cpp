#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, el, tmp, o = 0;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
    {
        cin >> el;
        if(i > k && tmp != el && i != 1) break;
        if(el > 0)  o++;
        tmp = el;
    }
    cout << o << endl;
    
    return 0;
}