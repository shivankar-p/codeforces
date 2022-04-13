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
    int sm = 0;
    unordered_map<int, int> mp;
    fo(i, n)
    {
        cin >> v[i];
        sm += v[i];
        mp[v[i]]++;
    }
    if(mp.size() == 1)
    {
        cout << 0 << endl;
        return;
    }
    for(int k = 1; k < n; k++)
    {
        if(sm % (n-k) != 0) continue;
        else
        {
            int ts = sm/(n-k);
            int x = 0;
            int cnt = 0;
            fo(j, n)
            {
                x += v[j];
                if(x == ts)
                {
                    x = 0;
                    cnt++;
                }
            }
            if(cnt == n-k)
            {
                cout << k << endl;
                return;
            }
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
