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
bool cmp(pair<int,int> &a,pair<int,int> &b)
{
    return a.first > b.first;
}

void solve() {
    int i, j, n, m;
    cin >> n;
    vi v(n);
    vector<pair<int, int>> pr(n);
    fo(i, n)
    {
        cin >> v[i];
        pr[i] = {v[i], i};
    }
    sort(pr.begin(), pr.end(), cmp);
    vector<pair<int, int>> out;
    int ans = 0;
    int cnt = 0;
    for(i = 0; i < n-1; i++)
    {
        out.pb({pr[i].s, cnt+1});
        ans += pr[i].f*(cnt+1);
        m = cnt;
        i++;
        ans += pr[i].f*(m+1);
        out.pb({pr[i].s, -(m+1)});
        //cout << ans << endl;
          cnt++;
    }
    //cout << ans << endl;
    if(n%2 == 1)
    {
        ans += pr[n-1].f*((n/2)+1);
        out.pb({pr[n-1].s, (n/2)+1});
    }
    cout << ans*2 << endl;
    sort(out.begin(), out.end());
    cout << 0 << " ";
    fo(i, n)    cout << out[i].s << " ";
    cout << endl;



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
