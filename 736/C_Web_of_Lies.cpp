#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long

/*=======================*/

void solve() {
    int i, j, n, m, u, v, type, sz, k, ans = 0, q, fg = 0;
    cin >> n >> m;
    //cout <<"a" << endl;
    vector<int> arr[n+1];
    int wkr[n+1] = {0};
    int edg[n+1] = {0};
    bool o[n+1] = {0};
    for(int i = 1; i <= m; i++)
    {
        cin >> u >> v;
        edg[u]++;
        edg[v]++;
        if(v < u)   wkr[u]++;
        else wkr[v]++;
        if(o[u] == 1)
        {
            if(wkr[u] != edg[u])
            {
                ans--;
                o[u] = 0;
            }
        }
        else
        {
            if(edg[u] == wkr[u])
            {
                ans++;
                o[u] = 1;
            }
        }

        if(o[v] == 1)
        {
            if(wkr[v] != edg[v])
            {
                ans--;
                o[v] = 0;
            }
        }
        else
        {
            if(edg[v] == wkr[v])
            {
                ans++;
                o[v] = 1;
            }
        }

    //cout << ans << endl;
     
        
    }
    if(m == 0)  ans = n;
    cin >> q;
    fo(i, q)
    {
        cin >> type;
        if(type == 1)
        {
            if(m == 0 && fg == 0)
            {
                fg = 1;
                ans = 0;
            }
            cin >> u >> v;
            edg[u]++;
            edg[v]++;
            if(v < u)   wkr[u]++;
            else wkr[v]++;
            if(o[u] == 1)
            {
                if(wkr[u] != edg[u])
                {
                    ans--;
                    o[u] = 0;
                }
            }
            else
            {
                if(edg[u] == wkr[u])
                {
                    ans++;
                    o[u] = 1;
                }
            }

            if(o[v] == 1)
            {
                if(wkr[v] != edg[v])
                {
                    ans--;
                    o[v] = 0;
                }
            }
            else
            {
                if(edg[v] == wkr[v])
                {
                    ans++;
                    o[v] = 1;
                }
            }
            cout << ans << endl;
        }
        else if(type == 2)
        {
            cin >> u >> v;
            edg[u]--;
            edg[v]--;
            if(u < v)   wkr[v]--;
            else wkr[u]--;
            if(o[u] == 1)
            {
                if(wkr[u] != edg[u])
                {
                    ans--;
                    o[u] = 0;
                }
            }
            else
            {
                if(wkr[u] == edg[u])
                {
                    ans++;
                    o[u] = 1;
                }
            }
            if(o[v] == 1)
            {
                if(wkr[v] != edg[v])
                {
                    ans--;
                    o[v] = 0;
                }
            }
            else
            {
                if(wkr[v] == edg[v])
                {
                    ans++;
                    o[v] = 1;
                }
            }
            //if(edg[u] == wkr[u])    ans++;
            //if(edg[v] == wkr[v])    ans++;
        }
        else
        {
            cout << ans << endl;
        }
    }
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
