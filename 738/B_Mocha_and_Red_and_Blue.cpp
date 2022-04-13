#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m;
    string s;
    cin >> n;
    cin >> s;
    if(s[0] == '?')
    {
        
        if(s[1] == 'B')
        {
            s[0] = 'R';
        }
        else if(s[1] == 'R')
        {
            s[0] = 'B';
        }
        else
        {
            i = 1;
            while(s[i] == '?')  i++;
            if(i % 2 == 0)
            {
                if(s[i] == 'B') s[0] = 'B';
                else s[0] = 'R';
            }
            else
            {
                if(s[i] == 'B') s[0] = 'R';
                else s[0] = 'B';
            }
        }
    }
    Fo(i, 1, n)
    {
        if(s[i] == '?')
        {
            if(s[i-1] == 'B') s[i] = 'R';
            else    s[i] = 'B';
        }
    }
    cout << s << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}


