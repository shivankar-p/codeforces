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
    int t;
    cin >> n >> t;
    vi a(n);
    fo(i, n)    cin >> a[i];
    i = 0;
    j = 0;
    int s = 0;
    while(s+a[j] <= t && j < n)
    {
        s += a[j];
        j++; 
    }
    int mx = j-i;
    while(i < n && j < n && i <= j)
    {
        //cout << "arig";
        s -= a[i];
        i++;
        while(s+a[j] <= t && j < n)
        {
            s += a[j];
            j++; 
        }
        /*cout << "j" << j << endl;
        if(j == n)  mx = max(mx, j-i-1);*/
        //cout << j << endl;
        mx = max(mx, j-i);
    }
    cout << mx << endl;
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
