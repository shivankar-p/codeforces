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
    int i, j = 0, n, m;
    cin >> n;
    int cnt = 0;
    while(cnt != n)
    {
        fo(i, n-j)  cout << "(";
        Fo(i, n+j, 2*n)   cout << ")";

        fo(i, j)    cout << "()";
        j++;
        cnt++;cout << endl;
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
