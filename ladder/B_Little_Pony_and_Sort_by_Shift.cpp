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
    vi v(n), t(n);
    fo(i, n)    cin >> v[i];
    fo(i, n)
    {
        t[i] = v[n-i-1];
    }
    if(is_sorted(t.begin(), t.end()))
    {
        cout << n-1 << endl;
    }
    else if(is_sorted(v.begin(), v.end()))
    {
        cout << 0 << endl;
    }
    else
    {
        int fg = 0;
        fo(i, n-1)
        {
            if(v[i] <= v[i+1] && fg == 0)
            {
                fg = 1;
            }
            if(v[i] > v[i+1] && fg == 1)
            {
                fg = 2;
                m = i;
            }
            if(v[i] > v[i+1] && fg == 2)
            {
                fg = -1;
                break;
            }
        }
        if(fg == 2)
        {
            if(v[n-1] >= v[m])
            {
                cout << n-1-m << endl;
            }
            else cout << -1 << endl;
        }
        else    cout << -1 << endl;
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
