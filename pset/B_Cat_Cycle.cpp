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
    int i, j, n, k;
    cin >> n >> k;
    if(n % 2 == 0)
    {
        if(k%n) cout << (k%n) << endl;
        else cout << n << endl;
    }
    else
    {
        k--;
        i = n/2;
        j = (k+k/i)%n;
        cout << j+1 << endl;
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
