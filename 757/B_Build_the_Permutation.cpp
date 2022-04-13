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
    int a, b;
    cin >> n >> a >> b;
    vi ans;
    if(a+b > n-2 || abs(a-b) > 1)
    {
        cout << -1 << endl;
        return;
    }
    else
    {
        int l, r, h, v;
        if(a == b)
        {
            l = 1;
            r = n;
            h = 0;
            ans.pb(1);
            l++;
            while(h < a)
            {
                ans.pb(r);
                r--;
                ans.pb(l);
                l++;
                h++;
            }
            for(i = l; i <=r; i++)  ans.pb(i);
        }
        else if(a > b)
        {
            l = 1;
            r = n;
            h = 0;
            ans.pb(1);
            l++;
            while(h < a-1)
            {
                ans.pb(r);
                r--;
                ans.pb(l);
                l++;
                h++;
            }

            ans.pb(r);
            r--;
            for(i = r; i >= l; i--) ans.pb(i);
        }
        else
        {
            l = 1;
            r = n;
            v = 0;
            ans.pb(r);
            r--;
            while(v < b-1)
            {
                ans.pb(l);
                l++;
                ans.pb(r);
                r--;
                v++;
            }
            ans.pb(l);
            l++;
            for(i = l; i <=r; i++) ans.pb(i);
        }
    }
    fo(i, n)
    {
        cout << ans[i] << " ";
    }
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
