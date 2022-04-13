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
    int  d;
    cin >> n >> d;
    string str = to_string(n);
    int k = str.length();
    while(k > 0)
    {
        m = n-(n%(int)pow(10, k))-1;
        if(n-m <= d)    break;
        k--;
    }
    //cout << k << endl;
    if(m < 0 || k == 0)   cout << n << endl;
    else
    {
        string mstr = to_string(m);
        string nw = "";
        for(i = 0; i < str.length()-mstr.length(); i++)
        {
            nw += str[i];
            if(i == str.length()-mstr.length()-1)   nw += mstr;
        }
        if(nw.length() > 0 && abs(n-stoi(nw)) <= d) cout << nw  << endl;
        else cout << m << endl;
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
