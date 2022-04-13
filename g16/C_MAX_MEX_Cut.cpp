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
    int i, j, n, m, ans = 0, fg  = 0;
    cin >> n;
    string s, t;
    cin >> s >> t;
    fo(i, n)
    {
        if(fg)
        {
            if((s[i] == '0' && t[i] == '1') || (s[i] == '1' && t[i] == '0') || (s[i] == '0' && t[i] == '0'))
            {
                ans += 2;
                fg  = 0;
            }
        }
        else
        {
            if((s[i] == '0' && t[i] == '1') || (s[i] == '1' && t[i] == '0'))    ans += 2;
            else if((s[i] == '0' && t[i] == '0'))
            {
                if(i < n-1)
                {
                    if(s[i+1] == '1' && t[i+1] == '1')
                    {
                        ans += 2;
                        i++;
                    }
                    else ans++;
                }
                else ans++;
            }
            else fg  = 1;
        }
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
