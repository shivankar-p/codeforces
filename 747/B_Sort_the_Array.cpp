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
    cin >>  n;
    vi v(n);
    fo(i, n)    cin >>  v[i];
    int cnt = 0, fg = -1;
    fo(i, n)
    {
        if(i > 0 && fg == -1)
        {
            if(v[i] > v[i-1])   fg = 1;
            else fg = 0;
            cnt++;
        }
        else if(i > 0 && fg == 1)
        {
            if(v[i] < v[i-1]) fg = 0;
            cnt++;
        }
        else if(i > 0 && fg == 0)
        {
            if(v[i] > v[i-1]) fg = 1;
            cnt++;
        }
    }
    if(cnt <= 2)    cout <<
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
