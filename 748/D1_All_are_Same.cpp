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
    int i, j, n, m, mn = INT_MAX;
    cin >> n;
    vector<int> v(n), mnar(n);
    fo(i, n)
    {
        cin >> v[i];
        if(v[i] < mn) mn = v[i];
    }
    fo(i, n)    mnar[i] = v[i]-mn;
    int g = mnar[0];
    fo(i, n)
    {
        if(i < n-1)
        {
            g = __gcd(g, mnar[i+1]);
        }
    }
    if(g == 0) cout << -1 << endl;
    else cout << g << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
