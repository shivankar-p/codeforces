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
    cin >> n;
    vi a(n), o(n);
    fo(i, n)
    {
        cin >> a[i];
        o[i] = a[i];
    }
    if(n%2 == 0)
    {
        i = 1;
        for(i = 0; i < n; i+=2)
        {
            swap(o[i], o[i+1]);
            o[i] = -o[i];
        }
    }
    else
    {
        for(i = 3; i < n; i+=2)
        {
            swap(o[i], o[i+1]);
            o[i] = -o[i];
        }
        if(o[0]+o[1] != 0)
        {
            o[0] = -a[2];
            o[1] = -a[2];
            o[2] = a[0]+a[1];
        }
        else if(o[1]+o[2] != 0)
        {
            o[0] = a[1]+a[2];
            o[1] = -a[0];
            o[2] = -a[0];
        }
        else
        {
            o[0] = -a[1];
            o[1] = a[0]+a[2];
            o[2] = -a[1];
        }
    }
    fo(i, n)    cout << o[i] << " ";
    cout << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
