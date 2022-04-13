#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
bool cmp(int &a, int &b) {
    return a > b;
}

void solve() {
    int i, j, n, m, h, s = 0;
    cin >> n >> h;
    vector<int> arr(n);
    fo(i, n)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), cmp);
    s = s + arr[0]+arr[1];
    j = h/s;
    h -= (j*s);
    j *= 2;
    if(h > 0)
    {
        h -= arr[0];
        j++;
    }
    if(h > 0)
    {
        h -= arr[1];
        j++;
    }
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
