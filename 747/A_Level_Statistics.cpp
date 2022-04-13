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
    int i, j, n, m;
    cin >> n;
    vector<pair<int, int>> v(n);
    fo(i, n) cin >> v[i].first >> v[i].second;
    if(v[0].first < v[0].second)
    {
        cout << "NO" << endl;
        return;
    }
    fo(i, n)
    {
        if(i > 0)
        {
            if((v[i].first < v[i-1].first) || (v[i].second < v[i-1].second) || (v[i].first-v[i-1].first < v[i].second-v[i-1].second))
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(n == 1)
    {
        if(v[0].first < v[0].second)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
