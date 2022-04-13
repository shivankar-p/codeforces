#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, sa = 0, sb = 0;
    cin >> n;
    vector<int> a(n), b(n);
    vector<pair<int, int>> v;
    fo(i, n)
    {
        cin >> a[i];
        sa += a[i];
    }
    fo(i, n)
    {
        cin >> b[i];
        sb += b[i];
    }
    if(sb != sa)   cout << -1 << endl;
    else
    {
        i = 0;
        j = 0;
        while(a != b)
        {
            while(a[i] <= b[i])
            {
               i++;
            }
            if(a[i] > b[i])
            {
                sa = i;
                a[i] -= 1;
                if(a[i] == b[i])    i++;
            }
            while(a[j] >= b[j])
            {
               j++;
            }
            if(a[j] < b[j])
            {
                sb = j;
                a[j] += 1;
                if(a[j] == b[j]) j++;
            }
            //cout << sa+1 << " " << sb+1 << endl;
            v.push_back({sa+1, sb+1});
        }
        cout << v.size() << endl;
        fo(i, v.size())   cout << v[i].first << " " << v[i].second << endl;
    }
    
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
