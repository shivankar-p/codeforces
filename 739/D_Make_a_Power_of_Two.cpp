#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/
string its(int a)
{
    stringstream ss;
    ss << a;
    string str = ss.str();
    return str;
}
void solve() {
    int i, j, k, n, m, cnt = 0, mn = INT_MAX;
    cin >> n;
    string s, x;
    s = its(n);
    //cout << s << endl;
    fo(i, 61)
    {
        x = its((int)pow(2, i));
        if(s == x)
        {
            cout << 0 << endl;
            return;
        }
        cnt = 0;
        j = 0;
        k = 0;
        while(j < s.size() && k < x.size())
        {
            
            if(s[j] == x[k])
            {
                j++;
                k++;
            }
            else
            {
                j++;
                cnt++;
            }
        }

        if(k < x.size())
        {
            cnt += (x.size()-k);
        }
        else
        {
            cnt += (s.size()-j);
        }
        //cout << cnt << endl;
        if(cnt < mn)    mn = cnt;
    }
    cout << mn << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
