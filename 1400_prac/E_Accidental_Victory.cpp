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
    int i, j, n, m, x;
    cin >> n;
    vector<pair<int, int>> arr(n);
    fo(i, n)
    {
        cin >> x;
        arr[i] = {x, i};
    }
    sort(arr.begin(), arr.end());
    vi pre(n);
    pre[0] = arr[0].f;
    Fo(i, 1, n)
    {
        pre[i] = (arr[i].f)+pre[i-1];
        //cout << arr[i].f << " " << pre[i-1]<< endl;
        //cout << arr[i].f+pre[i-1]<< endl;

    }

    //fo(i, n)    cout << pre[i] << " ";
    //cout << endl;
    for(i = n-2; i >= 0; i--)
    {
        if(pre[i] < arr[i+1].f)
        {
            //cout << pre[i] << " " << arr[i+1].f << endl;
            break;
        }
    }
    vi ans;
    Fo(j, i+1, n)
    {
        ans.pb(arr[j].s);
    }
    cout << ans.size() << endl;
    sort(ans.begin(), ans.end());
    fo(i, ans.size())
    {
        cout << ans[i]+1 << " ";
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
