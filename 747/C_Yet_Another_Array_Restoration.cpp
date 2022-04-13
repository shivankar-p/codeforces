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
    int i, j, n, x, y, fg = 0;
    cin >> n >> x >> y;
    if(n < y)
    {
        if(x < y-n+1)
        {
            cout << x << " ";
            int d = (y-x)/((n-1));
            int cnt = 0;
            while(cnt < n-1)
            {
                cout << x+d << " ";
                d += d;
                cnt++;
            }
            
            cout << endl;
        }
        else
        {
            //cout << x << " ";
            Fo(i, 1, n+1)
            {
                cout << y-n+i << " ";
            }
            cout << endl;
        }
        
    }
    else
    {
        Fo(i, 1, n) cout << i << " ";
        cout << endl;
    }
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
