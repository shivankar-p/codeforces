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
    int a, b;
    cin >> n >> a >> b;
    if(a > b)
    {
        if(n-a+1 < n/2 || b < n/2) cout << -1 << endl;
        else
        {
            fo(i, n/2)
            {
                cout << a << " ";
                a++;
            }

            fo(i, n/2)
            {
                cout << b << " ";
                b--;
            }
            cout << endl;
        }
    }
    else if(a == b) cout << -1 << endl;
    else
    {
        if(n-a+1 < n/2 || b < n/2) cout << -1 << endl;
        else if(b-a == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            for(i = b+1; i <= n; i++)   cout << i << " ";
            for(i = a; i <=b ; i++) cout << i << " ";
            for(i = 1; i < a; i++) cout << i << " ";
            cout << endl;
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
