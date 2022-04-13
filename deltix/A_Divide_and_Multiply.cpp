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
#define all(x) x.begin(), x.end()
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    vi v(n);
    int cnt = 0;
    fo(i,n)
    {
        cin >> v[i];
        while(v[i]%2 == 0)
        {
            v[i] = v[i]/2;
            cnt++;
        }
    }
    sort(all(v));
    int ans = 0;
    fo(i, n-1)  ans += v[i];
    ans += pow(2, cnt)*v[n-1];
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
