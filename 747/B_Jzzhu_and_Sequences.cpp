#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
int mf(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
void ans(int x, int y, int n)
{
    if(n%6 == 1) cout << mf(x, mod);
    else if(n%6 == 2) cout << mf(y, mod);
    else if(n%6 == 3) cout << mf((mf(y, mod)-mf(x,mod)), mod);
    else if(n%6 == 4) cout << mf(-x, mod);
    else if(n%6 == 5) cout << mf(-y,mod);
    else if(n%6 == 0) cout << mf((mf(x, mod)-mf(y,mod)), mod);
}

void solve() {
    int i, j, n, m;
    int x, y;
    cin >> x >> y >> n;
    ans(x, y, n);
    //cout << j << endl;
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
