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
    cin >> n >> m;
    int arr[m][n];
    fo(i, m)
    {
        fo(j, n)
        {
            cin >> arr[i][j];
        }
    }
    int x, y;
    cin >> x >> y;
    int arr2[x][y];
    fo(i, x)
    {
        fo(j, y)
        {
            cin >> arr2[i][j];
        }
    }
    int p, q, ans, ans1, ans2;
    int out = INT_MIN;
    for(int i = -max(x, m); i < max(x, m); i++)
    {
        for(int j = -max(y, n); j < max(y, n); j++)
        {
            ans = 0;
            fo(p, m)
            {
                fo(q, n)
                {
                    if(p+i < x && q+j < y && p+i >= 0 && q+j >= 0)
                    {
                        ans += arr[p][q]*arr2[p+i][q+j];
                    }
                }
            }
            if(i == 0 && j == 1)
            {
                cout << ans << endl;
            }
            if(ans > out)
            {
                ans1 = i;
                ans2 = j;
                out = ans;
            } 
        }
    }
    cout << ans1 << " " << ans2 << endl;
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
