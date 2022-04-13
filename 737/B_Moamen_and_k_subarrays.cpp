#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long

/*=======================*/

void solve() {
    int i, j, n, m, k, a, ans = 0;
    cin >> n >> k;
    vector<pair<int,int>> v(n);
    fo(i, n)
    {
        cin >> a;
        v[i] = {a, i};
    }
    sort(v.begin(), v.end());
    for(i = 1; i < n; i++) {
        if(v[i-1].second+1 != v[i].second)  ans++;
    }
    if(ans+1 <= k)  cout << "Yes" << endl;
    else cout << "No" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
