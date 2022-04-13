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
    int i, j, n, m, u, v, ans = 0, cnt = 0;
    cin >> n >> u >> v;
    vector<int> ve(n);
    fo(i, n)
    {
        cin >> ve[i];
        if(i > 0)
        {
            if(ve[i]-ve[i-1] == 0)    cnt++;
            else if(abs(ve[i]-ve[i-1]) > 1)    ans = 1;
        }    
    }
    if(cnt == n-1)
    {
        cout << v+min(u, v) << endl;
    }
    else if(ans == 1)   cout << 0 << endl;
    else cout << min(u, v) << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
