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
    string str;
    cin >> str;
    n = str.length();
    if(n%2 == 1)
    {
        fo(i, (n+1)/2)  cout << "4";
        fo(i, (n+1)/2) cout << "7";
        cout << endl;
    }
    else
    {
        string tmp = "";
        fo(i, n/2)  tmp += '7';
        fo(i, n/2) tmp += '4';
        if(str > tmp)
        {
            fo(i, (n+2)/2)  cout << "4";
            fo(i, (n+2)/2) cout << "7";
            cout << endl;
        }
        else if(str == tmp) cout << str << endl;
        else
        {
            int a = n/2, b = n/2, fg = 0;
            string tmp = "";
            fo(i, n)
            {
                //if(i == 1)  cout << fg << endl;
                //if(a <= 0 || b <= 0)    break;
                if(fg == 1)
                {
                    fo(i, a)    tmp += '4';
                    fo(i, b) tmp += '7';
                    cout << tmp << endl;
                    return;
                }
                if(str[i] == '4')
                {
                    a--;
                    tmp += '4';
                }
                else if(str[i] == '7')
                {
                    b--;
                    tmp += '7';
                }
                else if(str[i] < '4')
                {
                    tmp += '4';
                    fg = 1;
                    a--;
                }
                else if(str[i] <'7')
                {
                    tmp += '7';
                    fg = 1;
                    b--;
                }
                else
                {
                    fo(i, n/2)  cout << "7";
                    fo(i, n/2) cout << "4";
                    cout << endl;
                    return;
                }
            }
            if(fg == 1)
            {
                fo(i, a)    tmp += '4';
                fo(i, b) tmp += '7';
                cout << tmp << endl;
            }
            else cout << str << endl;
            return;
        }
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
