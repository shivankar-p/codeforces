#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
int powr(int n, int i)
{
    int ans = 1;
    int j = 0;
    while(j < i)
    {
        ans = (ans*n)%mod;
        j++;
    }
    return ans;
}


void solve() {
    int i, j, n, m;
    cin >> n;
    int nd = powr(2, n)-1;

    int ans = (powr(6, nd)-((powr(2, nd)*3*5*7*19))%mod)%mod;
    cout << ans << endl;

}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
