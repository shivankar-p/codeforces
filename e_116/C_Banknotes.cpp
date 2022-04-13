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
    int k;
    cin >> n >> k;
    vi v(n), pwr(10);
    pwr[0] = 1;
    Fo(i, 1, 10)
    {
        pwr[i] = pwr[i-1]*10;
    }
    fo(i, n)    cin >> v[i];
    k++;
    int ans = 0;
    fo(i, n-1)
    {
        j = v[i+1]-v[i];
        if(pwr[j]-1 <= k)
        {
            k -= (pwr[j]-1);
            ans += ((pwr[j]-1)*pwr[v[i]]);
        }
        else
        {
            ans += (k*pwr[v[i]]);
            k = 0;
        }
        
        if(k <= 0)  break;
        //cout << ans << " " << k << endl;
    }
    if(k > 0)
    {
        ans += (k*pwr[v[n-1]]);
    }
    printf("%lld\n", ans);
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
