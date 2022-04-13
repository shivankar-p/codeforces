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
    int i, j, a, b;
    cin >> a >> b;
    if(b == 1)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        if(b != 2)  cout << (b-1)*a << " " << a << " " << a*b << endl;
        else    cout << (5*b+1)*a << " " << (5*b-1)*a << " " << 10*a*b << endl;
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
