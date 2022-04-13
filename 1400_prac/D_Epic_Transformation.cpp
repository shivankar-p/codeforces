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
    unordered_map<int, int> mp;
    cin >> n;
    vi arr(n);
    fo(i, n)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }
    priority_queue<int> st;
    for(auto x: mp)
    {
        st.push(x.s);
    }
    //cout << st.size() << endl;
    while(st.size() >= 2)
    {
        int p = st.top();
        st.pop();
        int q = st.top();
        st.pop();
        p--; q--;
        if(p > 0)   st.push(p);
        if(q > 0) st.push(q);

    }
    if(st.size() == 0)  cout << 0 << endl;
    else
    {
        cout << st.top() << endl;
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
