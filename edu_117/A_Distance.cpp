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
    int x, y;
    cin >> x >> y;
    if(x == 0 && y == 0)
    {
        cout << "0 0" << endl;
        return;
    }
    if((x+y)%2 == 1)
    {
        cout << "-1 -1" << endl;
        return;
    }
    else
    {
        int p = (x+y)/2;
        if(y > x)
        {
            if(x > 0)   cout << x-1 <<" " <<  y-(p-1) << endl;
            else cout << x << " " << y-p << endl;
        }
        else
        {
            if(y > 0) cout << x-(p-1) << " " << y-1 << endl;
            else cout << x-p <<" " <<  y << endl;
        }
    }
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
