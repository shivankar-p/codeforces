#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, mx = 0, mn = 0, x;
    cin >> n;
    int arr[n];
    fo(i, n)
    {
        cin >> arr[i];
        if(i == 0)
        {
            x = arr[0];
        }
        else x &= arr[i];
    }
    cout << x << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
