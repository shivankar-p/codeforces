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
    int i, j, n, x;
    cin >> n >> x;
    vector<int> v(n);
    int s = 0;
    fo(i, n)
    {
        cin >> v[i];
        s += v[i];
    }

    if(s%x != 0) cout << n << endl;
    else
    {
        i = 0;
        int mx = INT_MIN;
        while(i < n)
        {
            int tmp = i;
            if(v[i]%x != 0)
            {
                while(i+1 < n && v[i+1] == 0)   i++;
                if(i != n-1) mx = max(mx, max(i+1, n-i-1));
                //i = tmp;
                /*while(i-1 >= 0 && v[i-1] == 0) i--;
                if(i != 0) mx = max(mx, max(i+1, n-i-1));
                i = tmp;*/
            }
            i++;
        }
        if(mx == INT_MIN)   cout << -1 <<endl;
        else cout << mx << endl;


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
