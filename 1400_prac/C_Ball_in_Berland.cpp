#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    int a, b, k;
    cin >> a >> b >> k;
    unordered_map<int, int> mp1, mp2;
    vi bs(k), gs(k);
    fo(i, k)
    {
        cin >> bs[i];
        mp1[bs[i]]++;
    }
    fo(i, k)
    {
        cin >> gs[i];
        mp2[gs[i]]++;
    }
    int ans = k*(k-1)/2;
    for(auto x : mp1)
    {
        if(x.s > 1)
        {
            ans -= (((x.s)*(x.s-1))/2);
        }
    }
    for(auto x : mp2)
    {
        if(x.s > 1)
        {
            ans -= (((x.s)*(x.s-1))/2);
        }
    }

    cout << ans << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
