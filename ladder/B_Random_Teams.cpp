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
    cin >> n >> m;
    if(m == 1)
    {
        cout << n*(n-1)/2 << " " << n*(n-1)/2 << endl;
    }
    else
    {
        int q = n/m;
        int r = n%m;
        int mx = (n-m+1)*(n-m)/2;
        int mn = r*(q+1)*(q)/2;
        mn += (m-r)*q*(q-1)/2;
        cout << mn << " " << mx << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
