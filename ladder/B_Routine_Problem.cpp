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
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    float r1 = (a/(b*1.0));
    float r2 = (c/(d*1.0));
    if(r1 == r2)
    {
        cout << 0 << '/' << 1 << endl;
    }
    else if(r1 < r2)
    {
        int g = __gcd(b*c-a*d, b*c);
        cout << (b*c-a*d)/g << '/' << b*c/g << endl;
    }
    else
    {
        int g = __gcd(a*d-b*c, a*d);
        cout << -(b*c-a*d)/g << '/' << a*d/g << endl;
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
