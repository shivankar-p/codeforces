#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, a, b, x = 0, r;
    cin >> a >> b;
    if(a == 0)  cout << 1 << endl;
    else
    {
        r = (a-1)%4;
        if(r == 0) x = a-1;
        else if(r == 1) x = 1;
        else if(r == 2) x = a;
        else x = 0;
        x ^= 0;
        if(x == b)  cout << a << endl;
        else if((x^b) != a)
        {
            cout <<  a+1 << endl;
        }
        else cout << a+2 << endl;
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
