#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, x, mx, k = 0;
    cin >> n;
    vector<pair<int, int>> v;
    fo(i, n)
    {
        cin >> m;
        mx = INT_MIN;
        fo(j, m)
        {
            cin >> x;
            if(x-j > mx) mx = x-j;
        }
        v.push_back({mx, m});
        //cout << mx << " " << m << endl;
    }
    sort(v.begin(), v.end());
    //cout << v[0].first << " " << v[0].second << endl;
    mx = v[0].first;
    //cout << mx << endl;
    for(i = 1; i < n; i++)
    {
        k+=v[i-1].second;
        //cout << v[i].first << " " << v[i].second << endl;
        if(v[i].first-k > mx) mx = v[i].first-k;
    }
    cout << mx+1 << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
