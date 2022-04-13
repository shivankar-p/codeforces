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
    int i, j, n;
    cin >> n;
    vector<int> v(n);
    unordered_map<int, int> mp;
    int s = 0;
    fo(i, n)
    {
        cin >> v[i];
        mp[v[i]]++;
        s += v[i];
    }
    if(mp.size() == 1)
    {
        cout << n*(n-1)/2 << endl;
        return;
    }
    float m = 2*s/(n*1.0);
    if(ceil(m) != m)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        int y = m;
        int ans = 0;
        int a, b, mn;
        for(auto it = mp.begin(); it != mp.end(); it++)
        {
            a = it->first;
            if(mp.find(y-a) != mp.end())
            {
                b = mp[y-a];
                if(it->first != y-a) ans += (it->second*b);
                else ans += (it->second)*(it->second-1);
            }
        }
        cout << ans/2 << endl;
    }

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
