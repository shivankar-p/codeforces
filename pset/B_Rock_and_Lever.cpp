#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int64_t long long
#define mod 1000000007
//vector<vector<int64_t>> a(n , vector<int64_t>(m, 0));

/*=======================*/

void solve() {
    int64_t i, j, n, m, ans = 0;
    cin >> n;
    vector<int64_t> v(n);
    unordered_map<int64_t, int64_t> mp;
    fo(i, n)
    {
        cin >> v[i];
        m = floor(log(v[i])/log(2))+1;
        if(v[i] >= pow(2, m-1))
        {
            //cout << "hi" << endl;
            mp[m]++;
        }
    }

    for(auto x : mp)
    {
        n = x.second;
        ans += ((n)*(n-1)/2);
        //cout << x.second << endl;
    }
    cout << ans << endl;
}

int32_t main() {
    int64_t t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
