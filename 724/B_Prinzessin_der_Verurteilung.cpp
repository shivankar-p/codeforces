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
    char y, z;
    cin >> n;
    string s;
    cin >> s;
    set<char>st;
    fo(i, n)
    {
        st.insert(s[i]);
    }
    char x = 'a';
    while(x <= 'z')
    {
        if(st.find(x) == st.end())
        {
            cout << x << endl;
            return;
        }
        x++;
    }
    st.clear();
    string sr;
    set<string>sta;
    for(i = 0; i < n-1; i++)
    {
        sr = "";
        sr += s[i];
        sr += s[i+1];
        sta.insert(sr);
    }
    x = 'a';
    while(x <= 'z')
    {
        y = 'a';
        while(y <= 'z')
        {
            sr = "";
            sr += x;
            sr += y;
            if(sta.find(sr) == sta.end())
            {
                cout << sr << endl;
                return;
            }
            y++;
        }
        x++;
    }
    sta.clear();

    set<string>stb;
    for(i = 0; i < n-2; i++)
    {
        sr = "";
        sr += s[i];
        sr += s[i+1];
        sr += s[i+2];
        stb.insert(sr);
    }
    x = 'a';
    while(x <= 'z')
    {
        y = 'a';
        while(y <= 'z')
        {
            z = 'a';
            while(z <= 'z')
            {
                sr = "";
                sr += x;
                sr += y;
                sr += z;
                if(stb.find(sr) == stb.end())
                {
                    cout << sr << endl;
                    return;
                }
                z++;
            }
            y++;
        }
        x++;
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
