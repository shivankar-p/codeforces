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
    i = abs(a-b);
    if(a > 2*abs(a-b) || b > 2*abs(a-b))    cout << -1 << endl;
    else if(c > 2*abs(a-b)) cout << -1 << endl;
    else if(c+abs(a-b) <= 2*abs(a-b)) cout << c+abs(a-b) << endl;
    else cout << c-abs(a-b) << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
