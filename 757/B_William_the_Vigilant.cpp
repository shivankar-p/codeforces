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
    int i, j, n, m, pos, cnt = 0;
    int q;
    cin >> n >> q;
    map<int, int> mp;
    string str;
    char c;
    cin >> str;
    if(n > 2)
    {
    fo(i, n-2)
    {
        if(str[i] == 'a' && str[i+1] == 'b' && str[i+2] == 'c')
        {
            mp[i] = 1;
            i+=2;
            cnt++;
        }
    }
    }
    fo(i, q)
    {
        cin >> pos >> c;
        pos--;
        if(str[pos] == 'a' && (pos < n-2) && str[pos+1] == 'b' && str[pos+2] == 'c')
        {
            cnt--;
        }
        if(str[pos] == 'b' && (pos > 0) && (pos < n-1) && str[pos-1] == 'a' && str[pos+1] == 'c')
        {
            cnt--;
        }
        if(str[pos] == 'c' && (pos > 1) && str[pos-1] == 'b' && str[pos-2] == 'a')
        {
            cnt--;
        }

        str[pos] = c;
        
        if(str[pos] == 'a' && (pos < n-2) && str[pos+1] == 'b' && str[pos+2] == 'c')
        {
            cnt++;
            //if(i == 5)  cout << "a" << endl;
        }
        if(str[pos] == 'b' && (pos > 0) && (pos < n-1) && str[pos-1] == 'a' && str[pos+1] == 'c')
        {
            cnt++;
            //if(i == 5) cout << "b" << endl;
        } 
        if(str[pos] == 'c' && (pos > 1) && str[pos-1] == 'b' && str[pos-2] == 'a')
        {
            cnt++;
            //if(i == 5)  cout << "c" << endl;
        }


        cout << cnt << endl;
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
