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
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n >> m;
    char arr[n][m];
    fo(i, n)
    {
        fo(j, m)
        {
            cin >> arr[i][j];
            if(arr[i][j] == '.')
            {
                if((i+j)%2 == 0)    arr[i][j] = 'B';
                else arr[i][j] = 'W';
            }
            cout << arr[i][j];
        }
        cout << endl;
    }
}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
