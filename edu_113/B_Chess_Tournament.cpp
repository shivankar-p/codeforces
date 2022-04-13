#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, o = 0, s = 0, c = 0;
    cin >> n;
    string str;
    cin >> str;
    unordered_map<int, bool> mp;
    char a[n][n];
    fo(i, n)
    {
        fo(j, n)
        {
            a[i][j] = 'p';
        }
    }
    fo(i, n)
    {
        if(str[i] == '1') o++;
        else s++;
    }
    //cout << o << " " << s << endl;
    if(s <= 2 && s != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        cout << "YES" << endl;
        fo(i, n)
        {
            fo(j, n)
            {
                if(i == j)
                {
                    a[i][j] = 'X';
                }
                else
                {
                    if(str[j] == '1')
                    {
                        a[i][j] = '=';
                    }

                    if(str[i] == '2')
                    {
                        if(mp[i] == 0)
                        {
                            if(a[i][j] == 'p' && a[j][i] == 'p' && str[j] == '2')
                            {
                                a[i][j] = '+';
                                a[j][i] = '-';
                                mp[i] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    //cout << a[0][1] << endl;
    fo(i, n)
    {
        fo(j, n)
        {
            if(a[i][j] != 'p')  cout << a[i][j];
            else cout << "=";
        }
        cout << endl;
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
