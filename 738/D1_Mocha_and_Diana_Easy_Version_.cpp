#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

int find_set(int a, int s[])
{
    if(s[a] == a)   return a;
    return s[a] = find_set(s[a], s);
}

void union_set(int a, int b, int s[])
{
    int ra = find_set(a, s);
    int rb = find_set(b, s);
    s[rb] = ra;
}

void solve() {
    int i, j, n, m1, m2, a, b, cnt = 0;
    cin >> n >> m1 >> m2;
    int s1[n+1], s2[n+1], sz1[n+1] = {1}, sz2[n+1] = {1};
    vector<pair<int,int>> ans;
    fo(i, n+1)
    {
        s1[i] = i;
        s2[i] = i;
    }
    fo(i, m1)
    {
        cin >> a >> b;
        union_set(a, b, s1);
    }
    fo(i, m2)
    {
        cin >> a >> b;
        union_set(a, b, s2);
    }
    Fo(i, 1, n+1)
    {
        Fo(j, i+1, n+1)
        {
            int x = find_set(i, s1);
            int y = find_set(j, s1);

            int p = find_set(i, s2);
            int q = find_set(j, s2);

            //cout << x << " " << y << " " << p << " " << q << endl;

            if(x != y && p != q)
            {
                cnt++;
                ans.push_back({i, j});
                union_set(i, j, s1);
                union_set(i, j, s2);
            }
        }
    }
    cout << cnt << endl;
    fo(i, cnt) cout << ans[i].first << " " << ans[i].second << endl;
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
