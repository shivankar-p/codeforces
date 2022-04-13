#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
void build(int l,  int r, vector<int> &v, vector<int> &d, int dep)
{
    if(l > r)   return;
    else if(l == r)
    {
        d[l] = dep;
        return;
    }
    int mx = l;
    int i;
    Fo(i, l, r+1)
    {
        if(v[i] > v[mx])    mx = i;
    }
    d[mx] = dep;
    build(l, mx-1, v, d, dep+1);
    build(mx+1, r, v, d, dep+1);
}

void solve() {
    int i, j, n, m;
    cin >> n;
    vector<int> v(n), d(n);
    fo(i, n)    cin >> v[i];
    build(0, n-1, v, d, 0);

    fo(i, n) cout << d[i] << " ";
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
