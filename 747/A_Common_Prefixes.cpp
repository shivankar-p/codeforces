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
    cin >>  n;
    vector<int> v(n);
    string str;
    fo(i, n)    cin >> v[i];
    vector<string> s(n+1);
    s[0] = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    Fo(i, 1, n+1)
    {
        str = "";
        fo(j, v[i-1]) str.push_back(s[i-1][j]);
        if(s[i-1][v[i-1]] == 'a')
        {
            Fo(j, v[i-1], 52)   str.push_back('b');
        }
        else
        {
            Fo(j, v[i-1], 52)   str.push_back('a');
        }
        s[i] = str;
    }
    fo(i, n+1) cout << s[i] << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
