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
    int i, j, n, u, r, d, l;
    int tn, tu, tr, td, tl;
    cin >> n >> u >> r >> d >> l;
    fo(i, 16)
    {
        tn = n;
        tu = u;
        tl = l;
        tr = r;
        td = d;
        if(i & 1)
        {
            tl--;
            tu--;
        }

        if(i & 2)
        {
            tu--;
            tr--;
        }

        if(i & 4)
        {
            tr--;
            td--;
        }

        if(i & 8)
        {
            tl--;
            td--;
        }

        bool a = (tl >= 0) && (tr >= 0) && (tu >= 0) && (td >= 0);
        bool b = (tl < n-1) && (tr < n-1) && (tu < n-1) && (td < n-1);
        if(a && b)
        {
            cout << "YES" << endl;
            return;
        }

    }
    cout << "NO" << endl;
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
