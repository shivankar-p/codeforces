#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    string s;
    cin >> s;
    fo(i, s.length())
    {
        if(s[i] == 'U') cout << "D";
        else if(s[i] == 'D')    cout << "U";
        else cout << s[i];
    }
    cout << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
