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
    int i, j, n, m, sm = 0;
    cin >> n;
    vi v(n);
    set<pair<int, int>> st;
    fo(i, n)
    {
        cin >> v[i];
        if(v[i] != 0)   st.insert({v[i], i+1});
        sm += v[i];
    }
    auto x = st.end();
    x--;
    sm -= (*x).first;
    if(sm == 0)
    {
        cout << 0 << endl;
        return;
    }
    vector<pair<int, int>> ans;
    pair<int, int> p, q;
    while(st.size() > 1)
    {
        auto it = st.end();
        it--;
        p = *it;
        i = (*it).second;
        it--;
        q = *it;
        j = (*it).second;
        auto it2 = it++;
        st.erase(it);
        st.erase(it2);
        ans.push_back({i, j});
        if(p.first-1>0)
        {
            p.first--;
            st.insert({p.first, p.second});
        }
        if(q.first-1>0)
        {
            q.first--;
            st.insert({q.first, q.second});
        }
    }
    cout << ans.size() << endl;
    fo(i, ans.size())
    {
        cout << ans[i].s << " " << ans[i].f << endl;
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
