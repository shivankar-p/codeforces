#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 998244353 

/*=======================*/
int fact(int n)
{
    return (n == 1 || n == 0) ? 1 : ((n%mod) * (fact(n - 1)%mod))%mod;
}

void solve() {
    int i, j, n, m, mx = INT_MIN;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> mp;
    fo(i, n)
    {
        cin >> a[i];
        mp[a[i]]++;
    }
    sort(a.begin(), a.end());
    if(mp.size() == 1 || mp[a[n-1]] > 1)
    {
        cout << fact(n) << endl;
        return;
    }
    auto itr = lower_bound(a.begin(), a.end(), a[n-1]);
    itr--;
    //cout << *itr << endl;
    if(a[n-1]-(*itr) > 1)
    {
        cout << 0 << endl;
        return;
    }
    else
    {
        i = 1;
        for(auto x: mp)
        {
            i *= fact(x.second);
        }
        int ans;
        cout << i << endl;
        ans = fact(n)-2*(fact(n-1)/i);
        cout << ans << endl;
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
