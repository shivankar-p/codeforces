#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define fs first
#define sd second
#define pb push_back
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
bool issub(string a, string b)
{
    int i = 0;
    int j = 0;
    while(i < a.length() && j < b.length())
    {
        if(a[i] == b[j])
        {
            i++;
            j++;
        }
        else i++;
    }
    //cout << j << endl;
    if(j == b.length()) return 1;
    else return 0;
}

void solve() {
    int i, j, n, m;
    string s, t;
    cin >> s >> t;
    if(t.length() > s.length())
    {
        cout << "need tree" << endl;
        return;
    }
    map<char, int> mp, mp2;
    fo(i, s.length())
    {
        mp[s[i]]++;
    }
    /*fo(i, t.length())
    {
        if(mp[t[i]] == 0)
        {
            cout << "need tree" << endl;
            return;
        }
        mp2[t[i]]++;
    }*/

    if(issub(s, t))
    {
        cout << "automaton" << endl;
        //cout << "hi" << endl;
    }
    else
    {
        for(int i = 0; i < s.size(); i++)
        {
            //cout << x.first << " " << mp2[x.first] << " " << x.second << endl;
            if(mp2[s[i]] < mp[s[i]])
            {
                cout << "both" << endl;
                return;
            }
            else if(mp2[s[i]] > mp[s[i]])
            {
                cout << "need tree" << endl;
                return;
            }
        }
        cout << "array" << endl;
        return;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
