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
    int i, n, m, x;
    cin>>x;
    if(x == 0) cout << 1 << endl;
    else if(x == 1) cout << 2 << endl;
    else
    {
        float j = log(x+1)/log(2);
        if(floor(j) == j)  cout << x+1 << endl;
        else
        {
            j = log(x)/log(2);
            m = floor(j);
            cout << (int)pow(2, m) << endl;
        }
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
