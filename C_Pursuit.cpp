#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, u = 0, lya = 0, x, w, in, inb = 0, fg = 0, cnt = 0;
    cin >> n;
    x = n;
    vector<int> a(n), b(n);
    fo(i, n)
    {
      cin >> a[i];
      u += a[i];
    }
    fo(i, n)
    {
      cin >> b[i];
      lya += b[i];
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    fo(i, n/4)
    {
      u -= a[i];
      lya -= b[i];
      fg = 1;
    }
    if(u >= lya)
    {
      cout << 0 << endl;
      return;
    }
    else
    {
      in = (n/4)-1;
      //cout << u << " " << lya << endl;
      if(fg)  w = (n/4);
      else w = 0;
      while(1)
      {
        if(u >= lya)  break;
        if(in >= 0)
        {
          lya += b[in];
          in--;
        }
        else cnt++;
        u += 100;
        if(inb > 0 && cnt > 0)
        {
          lya += b[inb];
          inb--;
          cnt--;
        }
        //cout << u << " " << lya << endl;
        x++;
        if(x%4 == 0)
        {
          u -= a[w];
          w++;
          if(cnt) cnt--;
          else
          {
            lya -= b[inb];
            inb++;
          }
        }
       // cout << u << " " << lya << " " << in << endl;
      }
      cout << x-n << endl;
      return;

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
