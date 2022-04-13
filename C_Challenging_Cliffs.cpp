#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, x, y, mn = INT_MAX;
    cin >> n;
    int a[n];
    fo(i, n)    cin >> a[i];
    sort(a, a+n);
    Fo(i, 1, n)
    {
        if(a[i]-a[i-1] < mn)
        {
            x = i;
            mn = a[i]-a[i-1];
        }
    }
    cout << a[x-1] << ' ';
    Fo(i, x+1, n)
    {
        cout << a[i] << ' ';
    }
    fo(i, x-1)  cout << a[i] << ' ';
    cout << a[x] << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
