#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/
string tostr(int n)
{
    string str = to_string(n);
    //trstring str = string(intStr);
    return str;
}

void solve() {
    int i, j, n, m, r, x, y;
    string s, a, b;
    cin >> s;
    i = 0;
    while(i < s.length())
    {
        a += s[i];
        i++;
        if(i < s.length())
        {
            b += s[i];
            i++;
        }
    }
    if(b.length() != 0)
    {
        x = stoi(a);
        y = stoi(b);
        cout << (x+1)*(y+1)-2 << endl;
    }
    else
    {
        cout << stoi(s)-1 << endl;
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
