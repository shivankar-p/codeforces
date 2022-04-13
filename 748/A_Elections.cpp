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
    int i, j, n, m;
    int a, b, c;
    cin >> a >> b >> c;
    int mx = max(a, max(b, c));
    a = mx-a;
    b = mx-b;
    c = mx-c;
    if(a!=0)    a++;
    if(b!=0) b++;
    if(c!=0) c++;
    int cnt = 0;
    if(a == 0) cnt++;
    if(b == 0) cnt++;
    if(c == 0) cnt++;
    if(cnt > 1)
    {
        if(a == 0) a++;
        if(b == 0) b++;
        if(c == 0) c++;
    }
    cout << a << " " << b << " " << c << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
