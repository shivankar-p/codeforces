#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j = 0, n, m, fg = 0, fgz = 0, mn = INT_MAX;
    cin >> n;
    vector<int> a(n);
    fo(i, n)
    {
        cin >> a[i];
        if(a[i] < 0) j++;
        else if(a[i] == 0)  fgz++;
    }
    sort(a.begin(), a.end());
    Fo(i, 1, n)
    {
        if(abs(a[i]-a[i-1]) < mn && a[i] <= 0 && a[i-1] <= 0) mn = abs(a[i]-a[i-1]);
    }
    fo(i, n)
    {
        if(a[i] <= mn && a[i] > 0)  fg = 1;
    }
    if(fgz > 1) cout << j+fgz << endl;
    else    cout << j+fg+fgz << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
