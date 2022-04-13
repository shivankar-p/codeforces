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
    vi v(n);
    fo(i, n)    cin >> v[i];
    i = 0, j = n-1;
    int x = -1;
    int fga = -1, fgb = -1;
    while(i < j && i < n && j > 0)
    {
        while(v[i] != v[j] && i < j && i < n && j > 0)
        {
            if(x != -1 && v[j] != x && v[i] != x)
            {
                fga = 0;
                break;
            }
            if(x == -1) x = v[j];
            if(v[i] == x)   i++;
            else j--;
        }
        i++;
        j--;
    }
    x = -1;
    i = 0, j = n-1;
    while(i < j && i < n && j > 0)
    {
        while(v[i] != v[j] && i < j && i < n && j > 0)
        {
            if(x != -1 && v[i] != x && v[j] != x)
            {
                fgb = 0;
                break;
            }
            if(x == -1) x = v[i];
            if(v[j] == x) j--;
            else i++;
        }
        i++;
        j--;
    }
    //cout << fga << " " << fgb << endl;
    if(fga == 0 && fgb == 0)  cout << "NO" << endl;
    else cout << "YES" << endl;
    
    
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
