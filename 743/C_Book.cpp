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
    int i, j, n, m, x, cnt = 0, cx = 0;
    cin >> n;
    vector<vector<int>> v(n+1);
    vector<int> in(n+1, 0);
    vector<int> bk(n+1, 1);
    queue<int> q;
    Fo(i, 1, n+1)
    {
        cin >> m;
        in[i] = m;
        fo(j, m)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }
    Fo(i, 1, n+1)cout << in[i] << " ";
    cout << endl;
    while(cnt != n)
    {
        for(i = 1; i <= n; i++)
        {
            if(in[i] == 0)  q.push(i);
        }
        while(!q.empty())
        {
            j = q.front();
            q.pop();
            cnt++;
            for(i = 0; i < v[j].size(); i++)
            {
                //cout << "x" << in[v[j][i]] << endl;
                in[v[j][i]] = in[v[j][i]]-1;
                //cout << "y" << in[v[j][i]] << endl;
                if(v[j][i] < j) bk[v[j][i]] = max(1+bk[j], bk[v[j][i]]);
                else bk[v[j][i]] = max(bk[j], bk[v[j][i]]);
            }
            in[j] = -1;
        }
        //cout << cnt << endl;
    }
    int mx = INT_MIN;
    Fo(i, 1, n+1)
    {
        if(bk[i] > mx)  mx = bk[i];
        //cout << in[i] << endl;
    }
    if(mx == INT_MIN) cout << -1 << endl;
    else cout << mx << endl;
   
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
