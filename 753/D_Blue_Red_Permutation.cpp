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
bool cmp(pair<int, char> &a, pair<int, char> &b)
{
    if(a.first == b.first) return a.second > b.second;
    else return a.first < b.first;
}

void solve() {
    int i, j, n, m;
    cin >> n;
    vi v(n);
    string str;
    fo(i, n)    cin >> v[i];
    cin >> str;
    vector<pair<int, char>> pr(n);
    fo(i, n)
    {
        pr[i].f = v[i];
        pr[i].s = str[i];
    }
    sort(pr.begin(), pr.end(), cmp);
    int ps = 0, rd = 0;
    fo(i, n)
    {
        if(ps+rd < i)
        {
            cout << "NO" << endl;
            return;
        }
        if(pr[i].f == i+1)  ps++;
        if(pr[i].s == 'R' && pr[i].f != i+1)   rd++;
    }
    cout << "YES" << endl;
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
