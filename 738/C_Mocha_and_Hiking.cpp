#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m = -1;
    cin >> n;
    int a[n+1];
    Fo(i, 1, n+1)
    {
        cin >> a[i];
        if(i > 1) if(a[i] == 1 && a[i-1] == 0)    m = i-1;
    }
    if(a[1] == 1)
    {
        cout << n+1 << " ";
        Fo(i, 1, n+1)   cout << i << " ";
        cout << endl;
    }
    else if(a[n] == 0)
    {
        Fo(i, 1, n+2)   cout << i << " ";
        cout << endl;
    }
    else
    {
        if(m == -1) cout << m << endl;
        else{
        Fo(i, 1, m+1)
        {
            //if(a[i] == 0 && a[i+1] == 1)    break;
            cout << i << " ";
        }
        //Fo(i, 1, i+1) cout << i << " ";
        //cout << i+1 << " ";
        cout << n+1 << " ";
        //cout << "x" << endl;
        Fo(j, m+1, n+1) cout << j << " ";
        cout << endl;
        }
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
