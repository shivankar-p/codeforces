#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, in, cnt = 0;
    cin >> n;
    i = 1;
    //int dp[1001] = {0};
    i = 1;
    //in = 1;
    while(1)
    {
        if(i % 3 != 0 && i %10 != 3)    cnt++;
        if(cnt == n)
        {
            cout << i << endl;
            break;
        }
        i++;
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
