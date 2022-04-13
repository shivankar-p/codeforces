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
float maxm(float a, float b)
{
    if(a>b) return a;
    else return b;
}

void solve() {
    int i, j, n, m, l;
    cin >> n >> l;
    vi v(n);
    fo(i, n)    cin >> v[i];
    float ans = INT_MIN;
    sort(v.begin(), v.end());
    ans = max(v[0], l-v[n-1]);
    Fo(i, 1, n)
    {
        ans = maxm(ans, (v[i]-v[i-1])/2.0);
    }
    printf("%.10f", ans);
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
