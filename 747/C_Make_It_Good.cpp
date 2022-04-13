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
    cin >>n;
    vector<int> a(n);
    fo(i, n)    cin >> a[i];
    j = n-1;
    while(j-1 >= 0 && a[j] <= a[j-1])   j--;
    while(j-1 >= 0 && a[j] >= a[j-1])   j--;
    cout << j << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
