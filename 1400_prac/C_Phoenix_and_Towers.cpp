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
    int i, j, n, m, x;
    cin >> n >> m >> x;
    set<pair<int, int>> st;
    Fo(i, 1, m+1)
    {
        st.insert({0, i});
    }
    vi h(n);
    fo(i, n)
    {
        cin >> h[i];
    }
    cout << "YES" << endl;
    
    fo(i, n)
    {
        auto it = st.begin();
        cout << (*it).s << " ";
        st.erase(it);
        st.insert({(*it).f+h[i], (*it).s});
    }
    cout << endl;

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
