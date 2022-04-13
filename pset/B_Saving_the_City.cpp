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
    int i, j, a, b, o = 0;
    cin >>  a >> b;
    int ans = a;
    string s;
    cin >> s;
    int f = -1, l = -1;
    fo(i, s.length())
    {
        if(s[i] == '1')
        {
            f = i;
            break;
        }
    }
    for(i = s.length()-1; i >= 0; i--)
    {
        if(s[i] == '1')
        {
            l = i;
            break;
        }
    }
    for(i = f; i <= l; i++)
    {
        j = 0;
        while(s[i] == '0')
        {
            j++;
            i++;
        }
        ans += min(a, b*j);
    }

if(f == l && f == -1)
{
    cout << 0 << endl;return;
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
