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
    int i, j, n, m, q;
    cin >> n >> q;
    vector<int> v(n);
    fo(i, n)
    {
        cin >> v[i];
    }
    fo(i, q)
    {
        cin >> m;
        int in = find(v.begin(), v.end(), m)-v.begin();
        cout << in+1 << " ";
        rotate(v.begin(), v.begin()+in, v.begin()+1+in);
    }
    cout << endl;
    
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
