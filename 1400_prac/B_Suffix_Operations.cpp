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
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    vi v(n);
    int sm = 0;
    fo(i, n)
    {
        cin >> v[i];
        if(i > 0)   sm += abs(v[i]-v[i-1]);
    }
    int ans = min(sm-abs(v[1]-v[0]), sm-abs(v[n-1]-v[n-2]));
    for(i = 1; i < n-1; i++)
    {
        ans = min(ans, sm-abs(v[i]-v[i-1])-abs(v[i+1]-v[i])+abs(v[i-1]-v[i+1]));
    }
    cout << ans << endl;

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
