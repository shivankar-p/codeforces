#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
int hcf(int i, int j)
{
    if (j == 0)
        return i;
    return hcf(j, i%j);
     
}

void solve() {
    int i, j, n, m, x, pre = -1;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    vector<int> v;
    int fg = 0;
    fo(i, n)
    {
        if(s[i] != c)
        {
            if(fg == 0)
            {
                pre = i+1;
                fg = 1;
            }
            else
            {
                if(v.size() == 0)
                {
                    x = hcf(pre, i+1);
                    if(x == 1)
                    {
                        v.push_back(pre);
                        v.push_back(i+1);
                    }
                    else
                    {
                        v.push_back(x);
                    }
                }
                else
                {
                    fo(j, v.size())
                    {
                        x = hcf(v[j], i+1);
                        if(x != 1)  break;
                    }
                    if(j == v.size())   v.push_back(i+1);
                }
            }
        }
    }
    if(v.size() == 0 && pre != -1)
    {
        cout << 1 << endl;
        cout << pre+1 << endl;
    }
    else
    {
        cout << v.size() << endl;
        fo(i, v.size())
        {
            if(i == v.size()-1) cout << v[i] << endl;
            else cout << v[i] << " ";
        }
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
