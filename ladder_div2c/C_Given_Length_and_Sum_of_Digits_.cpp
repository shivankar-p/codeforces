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
    int i, j, m, sm;
    cin >> m >> sm;
    if(sm == 0)
    {   
        if(m == 1) cout << "0 0" << endl;
        else cout << "-1 -1" << endl;
        return;
    }
    if(sm == 0 || 9*m < sm)
    {
        cout << "-1 -1" << endl;
        return;
    }
    vi mx;
    int cnt = 0, tmp = sm;
    while(sm > 0)
    {
        int r = min((ll)9, sm);
        sm -= r;
        mx.pb(r);
        cnt++;
    }
    while(cnt<m)
    {
        mx.pb(0);
        cnt++;
    }
    //cout << "hi" << endl;
    
    vi mn(m, 0);
    mn[0] = 1;
    tmp -= 1;
    for(i = m-1; i >= 0; i--)
    {
        mn[i] += min(tmp, (ll)9);
        tmp -= min(tmp, (ll)9);
        if(tmp == 0) break;
    }
    fo(i, mn.size())    cout << mn[i];
    cout <<  " ";

    fo(i, mx.size())    cout << mx[i];
    cout << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
