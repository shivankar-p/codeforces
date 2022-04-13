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
    cin >> n >> m;
    if(n % 4 == 0)
    {
      cout << n/2 << " " << n/4 << " " << n/4 << endl;
    }
    else if(n % 2 == 1)
    {
      cout << 1 << " " << n/2 << " " << n/2 << endl;
    }
    else
    {
      cout << 2 << " " << (n-2)/2 << " " << (n-2)/2 << endl;
    }
 }

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
