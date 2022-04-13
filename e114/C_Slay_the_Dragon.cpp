#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve(vector<int> v, int n, int s) {
    int i, j, m;
    int x,y;
      
    cin >> x >> y;
    auto it = lower_bound(v.begin(), v.end(), x);
    //cout << "x" << *it << endl;
    if(*it == x)
    {
        s = s-x;
        if(y > s)   cout << y-s << endl;
        else cout << 0 << endl;
    }
    else if(it == v.end())
    {
        s -= v[n-1];
        j = 0;
        j += (x-v[n-1]);
        if(y > s)   j += y-s;
        cout << j << endl;
    }
    else
    {
        int mn = *it;
        j = 0;
        if(it != v.begin())
        {
            it--;
            if(x-*it < mn-x)
            {
                mn = *it;
                j += x-*it;
            }
        }
        s -= mn;
        if(y > s)   cout << y-s+j << endl;
        else cout << 0 << endl;
    }
}
    


int32_t main() {
    int t = 1, i, s = 0, n, m;
    //cin >> t;
    cin >> n;
    vector<int> v(n);
    fo(i, n)
    {
        cin >> v[i];
        s += v[i];
    }
    sort(v.begin(), v.end());
    cin >> m;
    fo(i, m)
    {
        solve(v, n, s);
    }

    return 0;
}
