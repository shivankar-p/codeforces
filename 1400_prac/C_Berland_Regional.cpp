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
    vector<pair<int, int>> pr(n+1);
    vector<multiset<int>> g(n+1);
    vector<vector<int>> pre(n+1);
    for(i = 1; i < n+1; i++)
    {
        cin >> pr[i].f;
    }
    for(i = 1; i < n+1; i++)
    {
        cin >> pr[i].s;
    }
    for(i = 1; i < n+1; i++)
    {
        g[pr[i].f].insert(pr[i].s);
    }
    for(i = 1; i < n+1; i++)
    {
        auto it = g[i].begin();
        pre[i].pb(0);
        int prr = 0;
        while(it != g[i].end())
        {
            int x = *it;
            pre[i].pb((x)+prr);
            prr = pre[i][pre[i].size()-1];
            it++;
        }
    }
    vi sumarr(n+1);
    for(int i = 1; i < n+1; i++)
    {
        sumarr[i] = pre[i][pre[i].size()-1];
    }
    for(int i = 1; i <= n; i++)
    {
        int sm = sumarr[i];
        for(int j = 1; j <= n; j++)
        {
            int x = g[j].size()%i;
            sm += pre[j][pre[j].size()-1];
            if(x != 0)  sm -= pre[j][x];
        }
        cout << sm << " ";
        /*for(int j = 1; j < pre[i].size(); j++)  cout << pre[i][j] << " ";
        cout << endl;*/
    }
    cout << endl;
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
