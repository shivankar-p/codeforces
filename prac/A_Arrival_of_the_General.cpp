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
    int i, j, n, m, mn, mx;
    cin >> n;
    vi a(n);
    fo(i, n)
    {
        cin >>  a[i];
        if(i == 0)
        {
            mn = 0;
            mx = 0;
        }
        else
        {
            if(a[i] > a[mx])    mx = i;
            if(a[i] <= a[mn])   mn = i;   
        }
    }
    if(min(mx-1, n-mn) == mx-1)
    {
        
    }

}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
