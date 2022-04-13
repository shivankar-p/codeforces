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
    int i, j, n, m, ans = 0, ln = 0;
    cin >> n;
    vector<int> a(n);
    fo(i, n)
    {
        cin >> a[i];
    }
    if(n == 1)
    {
        cout << a[0] << endl;
        return;
    }
    fo(i, n)
    {
        if(i>0 && i < n-1)
        {
            if(a[i] >= a[i-1] && a[i] >= a[i+1])
            {
                ans += min(a[i]-a[i-1], a[i]-a[i+1]);
                
            }
            ln += abs(a[i]-a[i-1]);
        }
        else if(i == 0)
        {
            if(a[i] >= a[i+1])
            {
                ans += a[i]-a[i+1];
            }
            ln += a[i];
        }
        else
        {
            if(a[i] >= a[i-1])
            {
                ans += a[i]-a[i-1];
            }
            ln += a[i]+abs(a[i]-a[i-1]);
        }
    }
    cout << ln-ans << endl;
    
}
   

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
