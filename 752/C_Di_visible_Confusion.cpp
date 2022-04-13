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
    //vi v(n);
    int mul = 2, fg = 0, fgb = 0;
    int cnt = 3;
    fo(i, n)
    {
        cin >> j;
        if(j % mul == 0 && fgb == 0) fg = 1;
        else if(j%(i+2) == 0 && fg == 0 && fgb == 1)
        {
            cout << "NO" << endl;
            return;
        }

        if(mul*(cnt) < mod)
        {
            mul = mul*(cnt);
            cnt++;
        }
        else fgb = 1;
    }
    if(!fg) cout << "YES" << endl;
    else cout << "NO" << endl;

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
