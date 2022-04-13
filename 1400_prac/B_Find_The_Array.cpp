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
    vi v(n);
    int so = 0, se = 0, s = 0;
    fo(i, n)
    {
        cin >> v[i];
        s += v[i];
        if(i%2 == 1)    se += v[i];
        else so += v[i];
    }
    if(se < (s/2.0))
    {
        i = 0;
        while(i < n)
        {
            if(i%2 == 1)
            {
                cout << 1 << " ";
            }
            else cout << v[i] << " ";
            i++;
        }
        cout << endl;
    }
    else
    {
        i = 0;
        while(i < n)
        {
            if(i%2 == 0)
            {
                cout << 1 << " ";
            }
            else cout << v[i] << " ";
            i++;
        }
        cout << endl;
    }


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
