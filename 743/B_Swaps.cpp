#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m, sw;
    cin >> n;
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    unordered_map<int, int> mp;
    fo(i, n)
    {
        cin >> a[i];
        mp[a[i]] = i;
    }
    fo(i, n)
    {
        cin >> b[i].first;
        b[i].second = i;
    }
    sort(b.begin(), b.end());
    
    int mn = INT_MAX;
    unordered_map<int, int> mp2;
    for(i = n-1; i>=0; i--)
    {
        mn =min(mn, b[i].second);
        b[i].second = mn;
        mp2[b[i].first] = mn;
    }
    int ans = INT_MAX;
    //cout << a[0] << " " << mp2[2] << endl;
    for(i = 0; i < n; i++)
    {
        //auto it = lower_bound(b[i].begin(), b[i].end(), {a[i]-1, 0})
        ans = min(ans, mp[a[i]]+mp2[a[i]+1]);
        //cout << ans << endl;
    }
    cout << ans << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
