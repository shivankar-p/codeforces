#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    int a[n];
    fo(i, n)    cin >> a[i];
    cout << 6*(n/2) << endl;
    for(i = 0; i < n; i+= 2)
    {
        cout << "1 " << i+1 << " " << i+2 << endl;
        cout << "2 " << i+1 << " " << i+2 << endl;
        cout << "1 " << i+1 << " " << i+2 << endl;
        cout << "2 " << i+1 << " " << i+2 << endl;
        cout << "1 " << i+1 << " " << i+2 << endl;
        cout << "2 " << i+1 << " " << i+2 << endl;
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
