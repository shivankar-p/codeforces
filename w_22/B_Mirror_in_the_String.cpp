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
    fo(i, n-1)
    {
        if((str[i+1] > str[i]) || (i == 0 && str[i] == str[i+1]))
        {
            fo(j, i+1)
            {
                cout << str[j];
            }
            j--;
            while(j >= 0)
            {
                cout << str[j];
                j--;
            }
            cout << endl;
            return;
        }
        
    }
    if(i == n-1)
    {
        cout << str;
        for(j = n-1; j >= 0; j--)   cout << str[j];
        cout << endl;
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
