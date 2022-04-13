#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    vector<int> v(n);
    vector<int> ans;
    fo(i, n)    cin >> v[i];
    int mx = v[0];
    i = 0;
    int tmp;
    while(i < n)
    {
        tmp = i;
        mx = v[i];
        if(mx < 0)
        {
            while(i < n && v[i] < 0)
            {
                if(v[i] > mx) mx = v[i];
                i++;
            }
            ans.push_back(mx);
            if(i != tmp)    i--;
        }
        else
        {
            while(i < n && v[i] > 0)
            {
                if(v[i] > mx) mx = v[i];
                i++;
            }
            ans.push_back(mx);
            if(i != tmp)    i--;
        }
        i++;
        //cout << mx << endl;
    }
    int s = 0;
    fo(i, ans.size())
    {
        s += ans[i];
    }
    cout << s << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
