#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, a, b, c;
    cin >> a >> b >> c;
    cout << 1;
    fo(i, a-1)  cout << 0;
    cout << " ";
    fo(i, b-c+1)    cout << 1;
    fo(i, c-1) cout << 0;
    cout << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
