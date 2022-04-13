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
    string a;
    cin >> a;
    n = a.length();
    m = 10*(a[n-2]-48)+a[n-1]-48;
    if(m == 0 || m%25 == 0)
    {
      cout << 0 << endl;
      return;
    }
    fo(i, n)
    {
      Fo(j, i+1, n)
      {
        m = 10*(a[i]-48)+a[j]-48;
        if(m == 0 || m%25 == 0)
        {
          //cout << i << " " << j << endl;
          if(i == 0 && j == n-1)  mn = min(mn, j-i-1);
          else
          {
            mn = min(mn, n-j-1+j-i-1);
          }
        }
      }
    }
    cout << mn << endl;
    //else cout << n-2 << endl;
    
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
