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
    int i, j, n, m, ans = 0;
    string s;
    cin >> s;
    n = s.length();
    fo(i, n)
    {
        if(i < n-1)
        {
            if(s[i+1] == s[i])  continue;
            else if(s[i] == '0')   ans++;
        }
        else
        {
            if(s[i-1] == s[i])
            {
                if(s[i] == '0') ans++;
            }
            else if(s[i] == '0') ans++;
        }
    }
    if(ans > 2) cout << 2 << endl;
    else cout << ans << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
