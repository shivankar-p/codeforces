#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m, c, co, fge, fgn;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<int> v;
    int o = 0, z = 0;
    fo(i, n)
    {
        if(s[i] == '0') z++;
        else o++;
        if(z == o) v.push_back(i);
    }
    //cout << v.size() << endl;

    if(s == t)
    {
        cout << "YES" << endl;
        return;
    }

    if(v.size() == 0)
    {
        cout << "NO" << endl;
        return;
    }
    
    for(i = v[v.size()-1]+1; i < n; i++)
    {
        //cout << "hi" << endl;
        if(s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    co = 0;
    if(v.size() == 1)
    {
        fge = 0;
        fgn  = 0;
        fo(i, v[0]+1)
        {
            if(i == 0)
            {
                if(s[i] == t[i])
                {
                    fge = 1;
                }
                else fgn = 1;
            }

            if(fge)
            {
                if(s[i] != t[i])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                if(s[i] == t[i])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    for(i = v.size()-1; i > 0; i--)
    {
        fge = 0;
        fgn = 0;
        for(j = v[i]; j > v[i-1]; j--)
        {
            if(j == v[i])
            {
                if(s[j] == t[j])    fge = 1;
                else fgn = 1;
            }
            if(fge == 1)
            {
                if(s[j] != t[j])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else if(fgn == 1)
            {
                if(s[j] == t[j])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }

    fge = 0;
    fgn = 0;
    fo(i, v[0]+1)
    {
            
            if(!i)
            {
                if(s[i] == t[i])    fge = 1;
                else fgn  = 1;
            }

            if(fge == 1){
                if(s[i] != t[i])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            else
            {
                if(s[i] == t[i])
                {
                    cout << "NO" << endl;
                    return;
                }
            }
    }
    cout << "YES" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
