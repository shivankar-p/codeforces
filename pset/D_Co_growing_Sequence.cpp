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
    int i, j, n, m, x;
    cin >> n;
    vector<int> a(n), o(n);
    fo(i, n)
    {
        cin >> a[i];
    }
    vector<int> b(n);
    o[0] = a[0];
    b[0] = 0;
    for(int i = 1; i < n; i++)
    {
        x = 0;
        while(1)
        {
            j = a[i] ^ x;
            if(o[i-1] && j == o[i-1])
            {
                o[i] = j;
                b[i] = x;
                break;
            }
            //cout << x << " " << endl;
            
            x++;
        }
        
    }
    fo(i, n)    cout << b[i] << " ";
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
