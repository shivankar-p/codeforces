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
    cin >> n >> m;
    vector<int> wkr(n+1, 0), edg(n+1, 0),eq(n+1, 0);
    int x, y, cnt = 0;
    fo(i, m)
    {
        cin >> x >> y;
        edg[x]++;
        edg[y]++;
        if(y <= x)  wkr[x]++;
        if(x <= y)  wkr[y]++;

    }
    for(i = 1; i < n+1; i++)
    {
        if(wkr[i] == edg[i])
        {
            cnt++;
            eq[i] = 1;
        }
    }
    int q;
    cin >> q;
    int t;
    int a = 0, b = 0;
    fo(i, q)
    {
        cin >> t;
        if(t == 1)
        {
            cin >> x >> y;
            edg[x]++;
            edg[y]++;
            if(y <= x)  wkr[x]++;
            if(x <= y)  wkr[y]++;

            if(eq[x] == 1 && edg[x] != wkr[x])
            {
                eq[x] = 0;
                cnt--;
            }
            else if(eq[x] == 0 && edg[x] == wkr[x])
            {
                eq[x] = 1;
                cnt++;
            }

            if(eq[y] == 1 && edg[y] != wkr[y])
            {
                eq[y] = 0;
                cnt--;
            }
            else if(eq[y] == 0 && edg[y] == wkr[y])
            {
                eq[y] = 1;
                cnt++;
            }
        }
        else if(t == 2)
        {
            cin >> x >> y;
            edg[x]--;
            edg[y]--;
            if(x <= y)  wkr[y]--;
            if(y <= x) wkr[x]--;

            if(eq[x] == 1 && edg[x] != wkr[x])
            {
                eq[x] = 0;
                cnt--;
            }
            else if(eq[x] == 0 && edg[x] == wkr[x])
            {
                eq[x] = 1;
                cnt++;
            }

            if(eq[y] == 1 && edg[y] != wkr[y])
            {
                eq[y] = 0;
                cnt--;
            }
            else if(eq[y] == 0 && edg[y] == wkr[y])
            {
                eq[y] = 1;
                cnt++;
            }

        }
        else if(t == 3)
        {
            cout << cnt << endl;
        }
    }
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
