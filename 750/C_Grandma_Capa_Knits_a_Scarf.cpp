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
    string s;
    cin >> n >> s;
    i = 0;
    int mn = INT_MAX;
    int p, q, cnt, fg;
    char c = 'a';
    while(i < 26)
    {
        p = 0, q = n-1, cnt = 0, fg = 0;
        while(p < q)
        {
            //cout << s[p] << s[q] << c << endl;
            if(s[p] != s[q])
            {
                if(s[p] == c)
                {
                    p++;
                    cnt++;
                }
                else if(s[q] == c)
                {
                    q--;
                    cnt++;
                }
                else
                {
                    fg = 1;
                    break;
                }
            }
            else
            {
                p++;
                q--;
            }
        }
        c++;
        //cout << cnt << " " << fg <<  c << endl;
        //cout << "gj" << " " << fg << endl;
        if(fg == 0) mn = min(mn, cnt);

        i++;
    }
    if(mn != INT_MAX) cout << mn << endl;
    else cout << -1 << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
