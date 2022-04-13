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
    int i, j, n, m, x, pr, cnt = 0;
    cin >> n >> m;
    multiset<pair<int, int>> ms;
    multiset<pair<int, int>> ms2;
    vector<pair<int, int>> v;
    int a[n][m];
    for(i = 0; i < n; i++)
    {
      for(j = 0; j < m; j++)
      {
        a[i][j] = -1;
        cin >> x;
        ms.insert({x, i});
        ms2.insert({i, x});

      }
    }
    auto itr = ms.begin();
    fo(i, m)
    {
      a[itr->second][i] = itr->first;
      v.push_back({itr->first, itr->second});
      itr++;
    }
    fo(i, m)
    {
      ms.erase(ms.lower_bound({v[i].first, v[i].second}));
      ms2.erase(ms2.lower_bound({v[i].second, v[i].first}));
    }
   
  
    auto itrx = ms2.begin();
   
    fo(i, n)
    {
      fo(j, m)
      {
        if(a[i][j] == -1)
        {
          a[itrx->first][j] = itrx->second;
          itrx++;
        }
      }
    }

    fo(i, n)
    {
      fo(j, m)
      {
        cout << a[i][j] << " ";
      }
      cout << endl;
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
