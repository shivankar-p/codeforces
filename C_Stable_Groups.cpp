#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, k, x, c= 0, cn = 0;
    cin >> n >> k >> x;
    int a[n];
    multiset<int> s;
    fo(i, n)    cin >> a[i];
    sort(a, a+n);
    Fo(i, 1, n)
    {
        if(a[i]-a[i-1] > x)
        {
            s.insert(a[i]-a[i-1]);
            c++;
        }
    }
    c++;
    auto itr = s.begin();
    while(itr != s.end())
    {
        j = ceil((*itr)/(x*1.0))-1;
        //cout << j << " " << c << endl;
        if(k -j >= 0)
        {
            k -= j;
            c--;
            itr++;
        }
        else    break;
        //cout << *itr++ << " ";
    }
    cout << c << endl;
}    

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
