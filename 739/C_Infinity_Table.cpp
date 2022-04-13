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
    i = ceil(sqrt(n));
    if((i*i)-n+1 <= i && (i*i)-n+1 > 0)
    {
        cout << i << " " << (i*i)-n+1 << endl;
    }
    else
    {
        j = ceil(sqrt(n));
        //cout << "hi" << j << endl;
        i = n-1+2*j-(j*j);
        //i = sqrt(i);
        cout << i << " " << j << endl;
        //cout << -1 << endl;
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
