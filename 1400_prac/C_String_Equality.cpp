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
    int k;
    cin >> n >> k;
    vi a(26, 0), b(26, 0);
    string sa, sb;
    cin >> sa >> sb;
    fo(i, n)
    {
        a[sa[i]-97]++;
        b[sb[i]-97]++;
    }

    fo(i, 26)
    {
        if(a[i] < b[i])
        {
            cout << "No" << endl;
            return;
        }
        a[i] -= b[i];
        if(a[i]%k > 0 || (i == 25 && a[i] > 0))
        {
            cout << "No" << endl;
            return;
        }
        if(i < 25)
        {
            a[i+1] += a[i];
        }
    }
    cout<< "Yes" << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
