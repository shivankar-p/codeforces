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
    int i , j, n, m;
    cin >> n;
    i = n % 4;
    j = n % 2;
    //cout << i << " " << j << endl;
    if(i == 0)
    {
        i = n/4;
        if(ceil(sqrt(i)) == sqrt(i))
        {
            cout << "YES" << endl;
            return;
        }
    }
    
    if(j == 0)
    {
        j = n/2;
        //cout << j << endl;
        if(ceil(sqrt(j)) == sqrt(j))
        {
            cout << "YES" << endl;
            return;
        }
    }

    cout << "NO" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
