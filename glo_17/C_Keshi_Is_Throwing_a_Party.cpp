#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    vector<pair<int, int>> v(n);
    fo(i, n)    cin >> v[i].f >> v[i].s;
    int ans, mnx = INT_MAX, mny = INT_MAX, x, y;
    vi out;
    for(int i = 1; i <= n; i++)
    {
        x = min(n, i+v[i-1].f);
        mnx = min(x, mnx);
        if(v[i-1].s >= i)    y = n;
        else if(v[i-1].s < i)   y = n-i+1+v[i-1].s;
        mny = min(mny, y);
        //cout << x << y << ans << endl;
        //out.pb(ans);
    }
    //sort(out.begin(), out.end());
    /*fo(i, out.size())   cout << out[i] << " ";
    cout << endl;*/
    cout << min(mnx, mny) << endl;
    //cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
