#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, sa = 0, sb = 0, ra = 5, rb = 5;
    string s, ts;
    cin >> s;
    ts = s;
    fo(i, 10)
    {
        if(s[i] == '1')
        {
            if((i+1)%2) sa++;
            else sb++;
        }
    }
    if(1)
    {
        sa = 0;
        sb = 0;
        i = 0;
        while(i < 10)
        {
          if(s[i] == '1')  
          {
              if((i+1)%2)
              {
                  sa++;
                  ra--;
              }
              else
              {
                  sb++;
                  rb--;
              }
          }
          else if(s[i] == '?')
          {
              if((i+1)%2)
              {
                  s[i] = '1';
                  sa++;
                  ra--;
              }
              else
              {
                  s[i] = '0';
                  rb--;
              }
          }
          else if(s[i] == '0')
          {
              if((i+1)%2)
              {
                  //s[i] = '1';
                  ra--;
              }
              else
              {
                  //s[i] = '0';
                  rb--;
              }
          }

          //cout << sa << " " << ra << " " << sb << " " << rb << endl;
          //scout << s << endl;
          if(sa > sb+rb)
          {
              break;
          }
          i++;
        }
        
    }
    int tmp = i;
    s = ts;
    //cout << s << endl;

    if(1)
    {
        sa = 0;
        sb = 0;
        i = 0;
        ra = 5;
        rb = 5;
        while(i < 10)
        {
          if(s[i] == '1')  
          {
              if((i+1)%2)
              {
                  sa++;
                  ra--;
              }
              else
              {
                  sb++;
                  rb--;
              }
          }
          else if(s[i] == '?')
          {
              if((i)%2)
              {
                  s[i] = '1';
                  sb++;
                  rb--;
              }
              else
              {
                  s[i] = '0';
                  ra--;
              }
          }
          else if(s[i] == '0')
          {
              if((i+1)%2)
              {
                  //s[i] = '1';
                  ra--;
              }
              else
              {
                  //s[i] = '0';
                  rb--;
              }
          }

          //cout << sa << " " << ra << " " << sb << " " << rb << endl;
          //cout << s << endl;
          if(sb > sa+ra)
          {
              break;
          }
          i++;
        }
    }
    if(min(tmp, i) != 10)   cout << min(tmp, i)+1 << endl;
    else cout << 10 << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
