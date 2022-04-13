#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, c= 0;
    cin >> n;
    vector<int> a(n), b(n);
    unordered_map<int,int> mp;
    fo(i, n)
    {
        cin >> a[i];
        mp[a[i]] = i+1;
    }
    fo(i, n)    cin >> b[i];
    vector<int> v(n+1);
    fo(i, n)
    {
        if(b[mp[b[i]]-1] == a[i]) c++;
    }
    if(c != n)  cout << (int)pow(2,(c/2)+1)%mod << endl;
    else cout << (int)pow(2,c/2)%mod << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
