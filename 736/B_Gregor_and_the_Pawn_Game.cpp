#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long

/*=======================*/

void solve() {
    int i, j, n, m, ans = 0;
    cin >> n;
    string a, b;
    cin >> a >> b;
    if(b[0] == '1' && a[0] == '0') ans++;
    else if(b[0] == '1' && a[1] == '1') {
        a[1] = '0';
        ans++;
    }
    
    for(i = 1; i < n-1; i++)
    {
        if(b[i] == '1')
        {
            if(a[i] == '0') ans++;
            else if(a[i-1] == '1')
            {
                ans++;
                a[i-1] = '0';
            }
            else if(a[i+1] == '1')
            {
                ans++;
                a[i+1] = '0';
            }
        }
    }
    if(b[n-1] == '1' && a[n-1] == '0')  ans++;
    else if(b[n-1] == '1' && a[n-2] == '1') {
     a[n-2] = '0';
     ans++;
    }
    cout << ans << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
