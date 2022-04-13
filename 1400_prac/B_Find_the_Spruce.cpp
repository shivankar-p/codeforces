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
    cin >> m >> n;
    int ans = 0;
    char arr[m][n];
    int dp[m][n];
    fo(i, m)
    {
        fo(j, n)
        {
            dp[i][j] = 0;
            cin >> arr[i][j];
            if(i == m-1 && arr[i][j] == '*')
            {
                dp[i][j] = 1;
                ans++;
            }

        }
    }
    for(i = m-2; i >= 0; i--)
    {
        for(j = 0; j < n ; j++)
        {
            if(arr[i][j] == '*')
            {
                int no = INT_MAX;
                if(j+1 < n)
                {
                    no = min(dp[i+1][j+1], no);
                }
                else
                {
                    dp[i][j] = 1;
                    ans++;
                    continue;
                }

                if(j-1 >= 0)
                {
                    no = min(dp[i+1][j-1], no);
                }
                else
                {
                    dp[i][j] = 1;
                    ans++;
                    continue;
                }

                no = min(dp[i+1][j], no);
                dp[i][j] = no+1;
                ans += no+1;
            }
        }
    }

    cout << ans << endl;
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
