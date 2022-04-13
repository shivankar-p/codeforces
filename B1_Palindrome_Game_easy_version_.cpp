#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j = 0, n, m, o = 0, z = 0;
    cin >> n;
    string s;
    cin >> s;
    fo(i, n)
    {
      if(s[i] == '1') o++; 
      else z++;
    }
    if(z == 1)
    {
      cout << "BOB" << endl;
    }
    else if(z%2 == 0)
    {
      cout << "BOB" << endl;
    }
    else
    {
      cout << "ALICE" << endl;
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
