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
    if(n == 1 || n == 2)
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
        Fo(i, 2, n)
        {
            if(str[i]-65 != (str[i-1]+str[i-2]-130)%26)
            {
                //cout << i << endl;
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
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
