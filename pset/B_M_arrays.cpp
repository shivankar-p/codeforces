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
    int i, j, n, m, out = 0;
    cin >> n >> m;
    vector<int> v(n);
    unordered_map<int, int> mp;
    fo(i, n)
    {
        cin >> v[i];
        mp[v[i]%m]++;
    }

    for(auto x : mp)
    {
        if(x.first == 0)    out++;
        else if(x.first == m/2.0) out++;
        else
        {
            if(x.first < m/2.0)
            {
                if(mp[m-x.first] != 0)
                {
                    if(abs(x.second-mp[m-x.first]) < 2) out++;
                    else out += (abs(x.second-mp[m-x.first]));
                }
                else out += x.second;
            }
            else if(mp[m-x.first] == 0) out += x.second;
        }

        //cout << out << endl;
    }
    cout << out << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
