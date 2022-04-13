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
    string str;
    cin >> n >> k;
    cin >> str;
    int w = 0, l = 0;
    fo(i, n)
    {
        if(str[i] == 'W')  w++;
        else l++;
    }
    if(k >= l)
    {
        cout << 2*(n-1)+1 << endl;
    }
    else
    {
        vi v;
        int x = 0;
        fo(i, n)
        {
            if(str[i] == 'W')   break;
        }
        int p = i;
        for(i = n-1; i >= 0; i--)
        {
            if(str[i] == 'W')   break;
        }
        int q = i;
        for(i = p; i <= q; i++)
        {
            if(str[i] == 'W')
            {
                if(x > 0)
                {
                    v.pb(x);
                    x = 0;
                }
            }
            else x++;
        }
        int ans = 0;
        sort(v.begin(), v.end());
        fo(i, v.size())
        {
            if(k-v[i] < 0)
            {
                ans += 2*k;
                k = 0;
                break;
            }
            else
            {
                ans += 2*v[i]+1;
                k -= v[i];
            }
            if(k == 0)  break;
        }
        int fga = 0, fgb = 0;
        if(k > 0 && p != 0)
        {
            p++;
            if(k >= p)
            {
                k -= p;
                ans += 1+(2*p);
                fga = 1;
            }
            else
            {
                k--;
                fga = 1;
                ans += 2;
            }
        }

        if(k > 0 && q != n-1)
        {
            q = n-q;
            if(k >= q)
            {
                k -= q;
                ans += 2*q;
                fgb = 1;
            }
            else
            {
                fgb = 1;
                k--;
                ans += 2;
            }
        }

        if(fga == 0 && fgb == 0)
        {
            int z = 1;
        }
        else if(fgb == 0)
        {
            ans += (2*k);
        }
        else
        {
            ans += 1+((k-1)*2);
        }
        if(str[0] == 'W')   ans++;
        Fo(i, 1, n)
        {
            if(str[i] == 'W')
            {
                if(str[i-1] == 'W') ans += 2;
                else ans++;
            }
        }
        cout << ans << endl;
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
