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
    int t, cnt;
    cin >> n >> t;
    string s, tmp;
    cin >> s;
    fo(i, t)
    {
        cnt = 0;
        tmp = s;
        fo(j, n-1)
        {
            if(s[j] == 'B' && s[j+1] == 'G')
            {
                swap(tmp[j], tmp[j+1]);
                cnt++;
            }
        }
        s = tmp;
        //cout << s << endl;
        if(!cnt) break;

    }
    cout << s << endl;
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
