#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n >> m;
    string s;
    vector<string> v(2*n-1);
    fo(i, 2*n-1)
    {
        cin >> v[i];
    }
    fo(i, m)
    {
        unordered_map<char, int> mp;
        fo(j, 2*n-1)
        {
            mp[v[j][i]]++;
            //cout << v[j] << endl;
        }
        for(auto x: mp)
        {
            if(x.second % 2 == 1)   cout << x.first;
        }
    }
    cout << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
