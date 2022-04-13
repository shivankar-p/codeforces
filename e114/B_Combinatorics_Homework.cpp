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
    int i, j, a, b, c, m, x = 0, y = 0, z= 0, e = 0, mn;
    vector<int> v(3);
    fo(i, 3)    cin >> v[i];
    cin >> m;
    sort(v.begin(), v.end());
    mn = v[0]+v[1]+v[2]-3;
    z = v[2]-v[1]-v[0]-1;
    if(m >= z && m <= mn) {cout << "YES" << endl;}
    else cout << "NO" << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
