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
    int i, j, n, m, s = 0, k;
    cin >> n;
    vector<int> v(n+2);
    fo(i, n+2)
    {
        cin >> v[i];
        s += v[i];
    }
    sort(v.begin(), v.end());
    s -= v[n+1];
    fo(i, n+1)
    {
        if(s-v[i] == v[n+1])
        {
            fo(j, i)    cout << v[j] << " ";
            Fo(j, i+1, n+1) cout << v[j] << " ";
            cout << endl;
            return;
        }
    }
    s -= v[n];
    if(s == v[n])
    {
        fo(i, n) cout << v[i] << " ";
        cout << endl;
        return;
    }
    cout << -1 << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
