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
    cin >> n;
    string str;
    cin >> str;
    vi v;
    fo(i, n)
    {
        if(str[i] == 'a')   v.pb(i);
    }
    int mn = INT_MAX;
    vector<pair<int,int>> arr;
    Fo(i, 1, v.size())
    {
        arr.pb({v[i]-v[i-1], v[i]});
    }
    sort(arr.begin(), arr.end());
    fo(i, arr.size())
    {
        int b = 0, c = 0;
        for(j = arr[i].s-arr[i].f+1; j < arr.s; j++)
        {
            if(str[j] == 'b')   b++;
            else c++;
        }
        if()
    }
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
