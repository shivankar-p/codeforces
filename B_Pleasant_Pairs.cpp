#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m = 0;
    cin >> n;
    int a[n+1];
    Fo(i, 1, n+1)    cin >> a[i];
    Fo(i, 1, n+1)
    {
        for(j = a[i]-i; j <= n; j += a[i])
        {
            if(j >= 0 && j <= n)
            {
                if((a[i]*a[j] == i+j) && (i < j))
                {
                    m++;
                }
            }
        }
    }
    cout << m << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
