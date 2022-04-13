#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, fg = 0;
    cin >> n;
    vector<int> a(n+1);
    Fo(i, 1, n+1) cin >> a[i];
    i = 0;
    while(!is_sorted(a.begin(), a.end()))
    {
        fg = 1;
        if((i+1) % 2 == 1)
        {
            for(j = 1; j < n-1; j+=2)
            {
                
                if(a[j] > a[j+1])   swap(a[j], a[j+1]);
            }
            i++;
        }
        else
        {
            for(j = 2; j < n; j+=2)
            {
                if(a[j] > a[j+1])   swap(a[j], a[j+1]);
            }
            i++;
        }
        
    }
    if(fg == 1) cout << i << endl;
    else cout << 0 << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
