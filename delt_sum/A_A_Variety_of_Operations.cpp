#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, c, d;
    cin >> c >> d;
    if(!c && !d)    cout << 0 << endl;
    else if(c == d) cout << 1 << endl;
    else if(abs(d-c) % 2 == 0)  cout << 2 << endl;
    else cout << -1 << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
