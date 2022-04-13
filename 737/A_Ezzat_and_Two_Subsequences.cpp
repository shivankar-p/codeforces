#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long

/*=======================*/

void solve() {
    int i, j, n, m, a, mx;
    double sm = 0;
    cin >> n;
    cin >> a;
    mx = a;
    sm = a;
    for(i = 1; i < n; i++)
    {
        cin >> a;
        if(a > mx) mx = a;
        sm += a;
    }
    printf("%.9lf\n", mx+((sm-mx)/(n-1)));
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
