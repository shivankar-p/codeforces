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
    int i, j, n, m, k;
    cin >> n >> m >> k;
    if(m < n-1)
    {
        cout << "NO" << endl;
    }
    else if(m > n*(n-1)/2)
    {
        cout << "NO" << endl;
    }
    else if(n == 1)
    {
        if(k <= 1) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    else if(m == n*(n-1)/2)
    {
        if(k > 2)   cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else if(m == n-1)
    {
        /*if((n-1)%2 == 0)
        {
            if((n-1)/2 < k-1)   cout << "YES" << endl;
            else cout << "NO" << endl;
        }
        else
        {
            j = ceil((n-1)/2);
            if(j < k-1) cout << "YES" << endl;
            else cout << "NO" << endl;
        }*/
        if(k > 2)   cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    else
    {
        if(k > 3)   cout << "YES" << endl;
        else cout << "NO" << endl;
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
