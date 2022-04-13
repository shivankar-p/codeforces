#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define ll long long
#define int long long

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> m >> n;
    vector<int> arr(m+1);
    fo(i, m+1)  arr[i] = n^i;
    sort(arr.begin(), arr.end());
    if(arr[0] != 0) cout << 0 <<endl;
    else{
        fo(i, m)
        {
            if(arr[i+1] != arr[i]+1)    break;
        }
        cout << arr[i]+1 << endl;
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
