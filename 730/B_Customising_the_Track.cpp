#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m = 0;
    cin >> n;
    int a[n];
    fo(i, n)
    {
      cin >> a[i];
      m += a[i];
    }
    if(m % n == 0)
    {
      cout << 0 << endl;
    }
    else
    {
      cout << (m%n)*(n-(m%n)) << endl;
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
