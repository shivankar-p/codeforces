#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/
//inline size_t key(int i,int j) {return (size_t) i << 32 | (unsigned int) j;}

void solve() {
    int i, j, n, m, d = 0, k = 0, a, b;
    cin >> n;
    string s;
    map<pair<int, int>, int> mp;
    cin >> s;
    fo(i, n)
    {
        if(s[i] == 'D') d++;
        else k++;
        m = __gcd(d, k);
        a = d/m;
        b = k/m;
        cout << mp[{a, b}]+1 << " ";
        mp[{a, b}]++;
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
