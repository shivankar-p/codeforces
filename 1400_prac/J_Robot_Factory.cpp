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

int cnt = 0;

bool kth(int n, int k)
{
    return ((n & (1 << (k - 1))) >> (k - 1));
}

void dfs(int x, int y, vector<vector<int>> arr, vector<vector<int>> &vis)
{
    //cout << cnt << endl;
    int m = arr.size();
    int n = arr[0].size();
    if(x < 0 || y < 0 || x >= m || y >= n || vis[x][y] == 1)  return;

    vis[x][y] = 1;

    //cout << x << y << cnt << endl;
    //cout << kth(arr[x][y], 4) << kth(arr[x][y], 3) << kth(arr[x][y], 2) << kth(arr[x][y], 1) << endl;

    if(kth(arr[x][y], 4) == 0)
    {
        if(x-1 >= 0 && x-1 < m && vis[x-1][y] == 0)
        {
            cnt++;
            dfs(x-1, y, arr, vis);
        }
    }
    if(kth(arr[x][y], 3) == 0)
    {
        if(y+1 >= 0 && y+1 < n && vis[x][y+1] == 0)
        {
            cnt++;
        //cout << "hey" << cnt << endl;
            dfs(x, y+1, arr, vis);
        }
    }
    if(kth(arr[x][y], 2) == 0)
    {
        if(x+1 >= 0 && x+1 < m && vis[x+1][y] == 0)
        {
            cnt++;
            dfs(x+1, y, arr, vis);
        }
    }
    if(kth(arr[x][y], 1) == 0)
    {
        if(y-1 >= 0 && y-1 < n && vis[x][y-1] == 0)
        {
            cnt++;
            dfs(x, y-1, arr, vis);
        }
    }
    

}

void solve() {
    int i, j, n, m, fg = 0;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n));
    vector<vector<int>> vis(m, vector<int>(n));
    vector<int> ans;

    fo(i, m)
    {
        fo(j, n)
        {
            vis[i][j] = 0;
            cin >> arr[i][j];
        }
    }
    int cc = 0;
    fo(i, m)
    {
        fo(j, n)
        {
            if(vis[i][j] == 0)
            {
                cnt = 0;
                dfs(i, j, arr, vis);
                ans.pb((cnt)+1);
            }
        }
    }
    /*fo(i, m)
    {
        fo(j, n)
        {
            cout << vis[i][j] << " ";
        }
        cout << endl;
    }*/
    sort(ans.begin(), ans.end());
    for(i = ans.size()-1; i >= 0; i--)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    //cout << cc << endl;
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
