#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m, k;
    cin >>  n >> k;
    vi v(k);
    fo(i, k)    cin >> v[i];
    sort(v.begin(), v.end());
    int mvs = 0, o = 0;
    for(i = k-1; i >= 0; i--)
    {
        //cout << mvs << " " << o << endl;
        if(mvs >= v[i]) break;
        mvs += n-v[i];
        o++;
    }
    cout << o << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
