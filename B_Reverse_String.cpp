#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/
int left(string s, string t, int i, int x)
{
    if(i-1 >= 0 && s[i-1] == t[x-1])
    {
        while(x<t.size() && i >= 0)
        {
            if(s[i] == t[x])
            {
                i--;
                x++;
            }
            else break;
        }
        if(x == t.size())
        {
            return 1;
        }
        else return 0;
    }
    else return 0;
}
int right(string s, string t, int i, int x)
{
    if(i == s.length()-1 || x == t.length()-1)  return 1;
    int j, l;
    if(s[i+1] == t[x+1])
    {
        j = right(s,t, i+1, x+1);
    }
    else
    {
        l = left(s, t, i, x);
    }
    if(l)   return 1;
    else return 0;
}

void solve() {
    int i, j, n, m;
    string s, t;
    cin >> s >> t;
    fo(i, s.length())
    {
        if(s[i] == t[0])
        {
            j = right(s, t, i, 0);
        }
        if(j){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
