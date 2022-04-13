#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m = 0, x;
    cin >> n;
    fo(i, n)
    {
        cin >> x;
        if(x < 0) m = 1;
    }
    if(m == 1)  cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;
        cout << 101 << endl;
        fo(i, 101) cout << i << " ";
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
