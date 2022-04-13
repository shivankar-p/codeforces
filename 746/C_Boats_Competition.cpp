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
    int i, j, n, m, mx = INT_MIN;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int>mp;
    fo(i, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    Fo(i, 2, 2*n+1)
    {
        int ans = 0;
        for(auto x: mp)
        {
            if(mp.count(i-x.first))
            {
                if(x.second < mp.at(i-x.first))    ans += x.second;
                else ans += mp.at(i-x.first);
            }
        }
        
        if(ans > mx)    mx = ans;
    }
    cout << mx/2 << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
