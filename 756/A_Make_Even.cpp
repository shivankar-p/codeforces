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
    if(n%2 == 0) cout << 0 << endl;
    else
    {
        string str = to_string(n);
        if((str[0]-48)%2 == 0)
        {
            cout << 1 << endl;
            return;
        }
        else
        {
            fo(i, str.length())
            {
                if((str[i]-48)%2 == 0)
                {
                    cout << 2 << endl;
                    return;
                }
            }
            cout << -1 << endl;
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
