#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m, k, h, fg = 0, pri, prj, fgb = 0;
    cin >> n >> m >> k;
    vector<vector<char>> v(n, vector<char>(m));
    vector<vector<bool>> vis(n, vector<bool>(m));
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> v[i][j];
            vis[i][j] = 0;
        }
    }

    for(i = n-1; i >= 0; i--)
    {
        for(j = 0; j < m; j++)
        {
            pri = i;
            prj = j;
            if(v[i][j] == '*')
            {
                int len = 0;
                h = 0;
                
                while(i-h >= 0 && j-h >= 0 && j+h < m)
                {
                    
                    if(v[i-h][j-h] == '*' && v[i-h][j+h] == '*')
                    {
                        cout << i-h << " " << j-h << " " << j+h << endl;
                        //cout << vis[i-h][j-h] << " " << vis[i-h][j+h] << endl;
                        if(vis[i-h][j-h] == 1 && vis[i-h][j+h] == 1)
                        {
                            break;
                            fg = 1;
                        }
                        if(h != 0) len++;
                        vis[i-h][j-h] = 1;
                        vis[i-h][j+h] = 1;
                        h++;
                        cout << len << endl; 
                    } 
                    else
                    {
                        break;
                        fgb = 1;
                    }
                    
                }
                if(len < k && fg == 0 && fgb == 0)
                {
                    cout << "NO" << endl;
                    return;
                }
                fg = 0;
                fgb = 0;
            }
            i = pri;
            j = prj;

        }
    }
    cout << "YES" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
