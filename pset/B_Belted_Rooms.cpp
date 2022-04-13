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
    int i, j, n, m, l = 0, r  =0, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    fo(i, n)
    {
        if(s[i] == '<') l++;
        else if(s[i] == '>')    r++;
    }
    if(l == 0 || r == 0) cout << n << endl;
    else
    {
        fo(i, n)
        {
            if(s[i] == '-')
            {
                l = 0;
                while(s[i] == '-' && i < n)
                {
                    l++;
                    i++;
                }
                ans += l+1;
            }
        }
        if(s[0] == s[n-1] && s[0] == '-')   ans--;
        cout << ans << endl;
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
