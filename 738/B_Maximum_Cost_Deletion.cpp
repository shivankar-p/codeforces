#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j = 1, n, m = 0, a , b;
    string s;
    cin >> n >> a >> b;
    cin >> s;
    if(b >= 0)  cout << n*(a+b) << endl;
    else
    {
      Fo(i, 1, n)
      {
        if(s[i-1] == s[i])  continue;
        else
        {
          m++;
        }

      }
      m++;
      cout << (n*a)+(b*ceil(m/2.0)) << endl;

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
