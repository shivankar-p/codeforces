#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, x, y;
    cin >> n;
    int pa[n], pb[n];
    string s;
    cin >> s;
    if(s[0] == 'a')
    {
        pa[0] = 1;
        pb[0] = 0;
    }
    else
    {
        pa[0] = 0;
        pb[0] = 1;
    }
    Fo(i, 1, n)
    {
        if(s[i] == 'a')
        {
            pa[i] = 1+pa[i-1];
            pb[i] = pb[i-1];
        }
        else
        {
            pb[i] = 1+pb[i-1];
            pa[i] = pa[i-1];
        }
    }
    fo(i, n)
    {
        Fo(j, i+1, n)
        {
            if(s[i] == 'a')
            {
                x = 0;
                y = 1;
            }
            else
            {
                y = 0;
                x = 1;
            }
            if(pa[j]-pa[i]+y == pb[j]-pb[i]+x)
            {
                cout << i+1 << " " << j+1 << endl;
                return;
            }
        }
    }
    cout << "-1 -1" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
