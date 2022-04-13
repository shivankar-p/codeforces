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
    fo(i, n)    cin >> v[i];
    deque<int> q;
    fo(i, n)
    {
        if(i > 0)
        {
            if(q.front() >= v[i])   q.push_front(v[i]);
            else q.push_back(v[i]);
        }
        else    q.push_back(v[i]);
    }
    fo(i, n)
    {
        cout << q.front() << " ";
        q.pop_front();
    }
    cout << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
