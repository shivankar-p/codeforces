#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j = 0, n, m;
    cin >> n;
    m = n/100;
    j += m;
    n -= (m*100);
    m = n/20;
    j += m;
    n -= (m*20);
    m = n/10;
    j += m;
    n -= (m*10);
    m = n/5;
    j += m;
    n -= (m*5);
    cout << j + n << endl;
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
