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
    string s;
    cin >> s;
    int cnt = 0, cntb = 0;
    fo(i, n)
    {
        if(s[i] == '0') cnt++;
        else break;
    }
    
    for(i = n-1; i >=0; i--)
    {
        if(s[i] == '1') cntb++;
        else break;
    }
    //cout << cnt << " " << cntb << endl;
    if(cnt+cntb != n)
    {
        fo(i, cnt) cout << 0;
        cout << 0;
        fo(i, cntb) cout << 1;
        cout << endl;
    }
    else cout << s << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
