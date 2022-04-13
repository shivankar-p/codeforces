#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, cap = 0, max, x, y;
    cin >> n;
    int v1[n], v2[n];
    for(int i=0; i<n; i++)  cin >> v1[i] >> v2[i];
    for(int i=0; i<n; i++)
    {
        cap = cap-v1[i]+v2[i];
        if(i == 0)  max = cap;
        else if(cap > max) max = cap;
    }
    cout << max << endl;
    return 0;
}