#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, t = 0, m = 0;
    cin >> n;string s;
    cin >> s;
    fo(i, n)
    {
        if(s[i] == 'T') t++;
        else m++;
        if(t < m)
        {
            cout << "NO" << endl;
            return;
        }
    }
    t = 0;
    m = 0;
    for(i = n-1; i >= 0; i--)
    {
        if(s[i] == 'T') t++;
        else m++;
        if(t < m)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if(t == 2*m) cout << "YES" << endl;
    else cout << "NO" << endl;
    
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
