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
    int i, j, n, m, p, q;
    cin >> m >> n;
    int b[m][n], a[m][n], na[m][n];
    fo(i, m)
    {
        fo(j, n)
        {
            a[i][j] = 1;
        }
    }
    fo(i, m)
    {
        fo(j, n)
        {
            na[i][j] = 0;
            cin >> b[i][j];
            if(!b[i][j])
            {
                fo(p, n)
                {
                    //cout << i << " " << p << endl;
                    a[i][p] = 0;
                }
                fo(p, m)
                {
                    //cout << p << " " << j << endl;
                    a[p][j] = 0;
                }
            }
        }
    }
    //cout << a[1][0] << a[1][2] << endl;
    fo(i, m)
    {
        fo(j, n)
        {
            fo(p, n)
            {
                if(a[i][p] == 1)
                {
                    na[i][j] = 1;
                    continue;
                }
            }
            fo(p, m)
            {
                if(a[p][j] == 1)
                {
                    na[i][j] = 1;
                    continue;
                }
            }
        }
    }
    fo(i, m)
    {
        fo(j, n)
        {
            if(na[i][j] != b[i][j])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    fo(i, m)
    {
        fo(j, n)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
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
