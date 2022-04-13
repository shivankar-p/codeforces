#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, a, b;
    cin >> a >> b;
    if(a == b)
    {
        cout << "0 0" << endl;
        return;
    }
    /*else if(a%b == 0 || b%a == 0)
    {
        j = abs(a-b);
        cout << abs(a-b) << " " << min(a, b) << endl;
        return;
    }*/
    else
    {
        j = abs(a-b);
        cout << j << " " << min(a%j, j-(a%j)) << endl;
        return;
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
