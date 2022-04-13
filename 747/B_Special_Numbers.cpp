#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
int powr(int n, int i)
{
    int ans = 1;
    int j = 0;
    while(j < i)
    {
        ans = (ans*n)%mod;
        j++;
    }
    return ans;
}

void solve() {
    int i, j, n, k, r;
    cin >> n >> k;
    string s = "";
    j = k;
    while(j > 0)
    {
        r = j % 2;
        if(r == 0) s = s+"0";
        else s = s+"1";
        j = j/2;
    }
    //reverse(s.begin(), s.end());
    int ans = 0;
    fo(i, s.length())
    {
        if(s[i] == '1') ans = (ans+powr(n, i))%mod;
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
