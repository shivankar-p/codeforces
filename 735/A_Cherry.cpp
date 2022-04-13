#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long

/*=======================*/

void solve() {
    int i, j, n, m = INT_MIN, pdt = 0;
    cin >> n;
    int a[n];
    cin >> a[0];
    for(i = 1; i < n; i++)
    {
        cin >> a[i];
        pdt = a[i]*a[i-1];
        if(pdt > m) m = pdt;
    }
    cout << m << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
