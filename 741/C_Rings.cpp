#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, cnt = 0, x = -2;
    cin >> n;
    string s;
    cin >> s;
    fo(i, n)
    {
        if(s[i] == '1') cnt++;
        else if(x == -2) x = i+1;
    }
    if(cnt == n)
    {
        cout << 1 << " " << n-1 << " "<< 2 << " " << n;
        return;
    }
    if(x < n/2)
    {
        cout << x << " " << n << " " << x+1 << " " << n << endl;
        return;
    }
    else
    {
        if(x != 2)  cout << 1 << " " << x << " " << 1 << " " << x-1 << endl;
        else 
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
