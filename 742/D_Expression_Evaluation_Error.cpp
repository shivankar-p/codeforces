#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, s, r, num;
    cin >> s >> n;
    if(n == 1)
    {
        cout << s << endl;return;
    }
    int tmp = s;
    num = s;
    r = (tmp%10);
    tmp -= r;
    if(!r)
    {
        cout << s-()
    }
    num = num/10;
    i = 10;
    while(r < n-1)
    {
        r += i*(num%10);
        tmp -= i*(num%10);
        if(tmp == 0)
        {
            tmp++;
            r--;
        }
        num /= 10;
        i *= 10;
    }
    cout << tmp << " ";
    fo(i, n-2)
    {
        cout << 1 << " ";
        r -= 1;
    }
    cout << r << endl;

}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
