#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    stack<int> out;
    string a, s;
    cin >> a >> s;
    if(stoi(s) < stoi(a))
    {
        cout << -1 << endl;
        return;
    }
    int na = a.length();
    int ns = s.length();
    i = na-1;
    j = ns-1;
    while(i >= 0 && j >= 0)
    {
        if(s[j] >= a[i])
        {
            out.push(s[j]-a[i]);
            //cout << s[j]-a[i] << endl;
            i--;
            j--;
        }
        else
        {
            if(j == 0)
            {
                cout << -1 << endl;
                return;
            }
            else if(s[j-1] != '1')
            {
                cout << -1 << endl;
                return;
            }
            string x = "1";
            x += s[j];
            out.push(stoi(x)-(a[i]-'0'));
            //cout << stoi(x)-(a[i]-'0') << endl;
            j -= 2;
            i--;
        }
    }

    //cout << out.size() << endl;
    if(j < 0 && i >= 0)
    {
        cout << -1 << endl;
        return;
    }
    string out_str = "", pre = "";
    while(!out.empty())
    {
        out_str += to_string(out.top());
        out.pop();
    }

    int k = 0;
    fo(k, j+1)
    {
        pre += s[k];
    }
    //cout << pre+"a" << endl;
    out_str = pre+out_str;
    i = 0;
    while(out_str[i] == '0')
    {
        i++;
    }
    while(i < out_str.length())
    {
        cout << out_str[i];
        i++;
    }

    cout << endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
