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
    cin >> n;
    vi a, b;
    int sa = 0, sb = 0;
    fo(i, n)
    {
        cin >> j;
        if(i == n-1)
        {
            if(j > 0)   m = 1;
            else m = 2;
        }
        if(j > 0)
        {
            a.pb(j);
            sa += j;
        }
        else
        {
            b.pb(-j);
            sb += (-j);
        }
    }
    if(sa > sb) cout << "first" << endl;
    else if(sa < sb) cout << "second" << endl;
    else
    {
        if(a > b)   cout << "first" << endl;
        else if(a < b) cout << "second" << endl;
        else
        {
            if(m == 1) cout << "first" << endl;
            else if(m == 2) cout << "second" << endl;
        }
    }
    
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
