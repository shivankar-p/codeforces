#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m, k;
    cin >> n >> m >> k;
    int a[n][m];
    vi l;
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> a[i][j];
            l.pb(a[i][j]);
        }
    }
    int mid = l.size()/2;
    nth_element(l.begin(), l.begin()+mid, l.end());
    //cout <<  mid << endl;
    int ans = 0;
    fo(i, n)
    {
        fo(j, m)
        {
            if(abs(l[mid]-a[i][j])%k == 0) ans+=(abs(l[mid]-a[i][j])/k);
            else
            {
                cout << -1 << endl;
                return;
            }
        }
    }
    cout << ans << endl;
}

int main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
