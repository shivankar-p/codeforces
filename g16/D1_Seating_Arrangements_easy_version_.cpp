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
    int i, j, n, m, ans = 0, c = 0;
    cin >> n >> m;
    vector<pair<int, int>> v(m);
    fo(i, m)
    {
        cin >> v[i].first;
        v[i].second = i;
    }
    sort(v.begin(), v.end());
    fo(i, m)
    {
        c = 0;
        fo(j, i)
        {
            if((v[j].second < v[i].second) && (v[i].first != v[j].first))   c++;
        }
        ans += c;
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
