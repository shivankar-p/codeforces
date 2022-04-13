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
    cin >> n;
    int ans = 0;
    i = 1;
    j = 1;
    while(1)
    {
        if(ans + (i*(i+1)/2) > n)   break;
        ans += (i*(i+1)/2);
        i += pow(2, j);
        j++;
    }
    cout << j-1 << endl;
    /*i = 1;
    j = 0;
    while(n >= 0)
    {
        j++;
        n -= ((i)*(i+1)/2);
        i += 2;
    }
    cout << j << endl;*/
}
int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
