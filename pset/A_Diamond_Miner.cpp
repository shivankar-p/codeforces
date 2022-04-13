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
    int i, j, n, m, x, y;
    double ans = 0;
    cin >> n;
    vector<int> a, b;
    fo(i, 2*n)
    {
        cin >> x >> y;
        if(x == 0)  b.push_back(abs(y));
        else a.push_back(abs(x));
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    fo(i, n)
    {
        ans += sqrt(a[i]*a[i]+b[i]*b[i]);
    }
    printf("%.15lf\n", ans);
    
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
