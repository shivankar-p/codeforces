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
    int i, j, n, m;
    cin >> n;
    vector<int> v(n);
    fo(i, n)    cin >> v[i];
    vector<int> l, r;
    fo(i, n)
    {
        int it = max_element(v.begin(), v.end())-v.begin();
        if(it != n-i-1)
        {
            l.push_back(it+1);
            r.push_back(n-i);
        }
        v.erase(it+v.begin());
    }
    cout << l.size() << endl;
    fo(i, l.size()) cout << l[i] << " " << r[i] << " " << 1 << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
