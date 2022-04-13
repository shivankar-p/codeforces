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
    int i, j, n, m, k, x;
    cin >> i >> j;
    if(i-j!=1)  
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        for(k = 2; k <= sqrt(i+j); k++)
        {
            if((i+j)%k == 0)
            {
                cout << "NO" << endl;
                return;
            }
            //cout << k << endl;
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
