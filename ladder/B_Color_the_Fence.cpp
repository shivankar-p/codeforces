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
    int v;
    cin >> v;
    vector<pair<int, int>> arr(10);
    vi err(10);
    Fo(i, 1, 10)
    {
        cin >> err[i];
        arr[i].first = err[i];
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end());
    i = 1;
    int fg = 0;
    string str = "";
    int tmp;
    while(v > 0)
    {
        tmp = v;
        while(i < 9)
        {
            if(arr[i].first == arr[i+1].first)
            {
                i++;
            }
            else break;
        }
        int x = v/arr[i].first;
        fo(j, x)
        {
            str += 48+(arr[i].second);
            fg = 1;
        }
        v -= x*arr[i].first;
        if(v == tmp)    break;
    }
    if(fg == 0) cout << -1 << endl;
    else
    {
        if(v > 0)
        {
            fo(i, str.length())
            {
                int tmp = v;
                if(v <= 0)  break;
                int x = err[str[i]-48];
                for(j = 9; j >= 1; j--)
                {
                    if(v >= err[j]-x && j > str[i]-48)
                    {
                        str[i] = 48+j;
                        v -= err[j]-x;
                        break;
                    }
                }
                if(v == tmp)    break;
            }
        }
        cout << str << endl;
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
