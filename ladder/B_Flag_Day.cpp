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
    cin >> n >> m;
    int arr[m][3];
    vi v(n+1, -1);
    fo(i, m)
    {
        fo(j, 3)
        {
            cin >> arr[i][j];
        }
    }
    v[arr[0][0]] = 1;
    v[arr[0][1]] = 2;
    v[arr[0][2]] = 3;
    Fo(i, 1, m)
    {
        int o = 0, tw = 0, th = 0;
        int in;

        
        if(v[arr[i][0]] == 1)
        {
            o++;
            in = 0;
        }
        else if(v[arr[i][0]] == 2)
        {
            tw++;
            in = 0;
        }
        else if(v[arr[i][0]] == 3)
        {
            th++;
            in = 0;
        }

        if(v[arr[i][1]] == 1)
        {
            o++;
            in = 1;
        }
        else if(v[arr[i][1]] == 2)
        {
            tw++;
            in = 1;
        }
        else if(v[arr[i][1]] == 3)
        {
            th++;
            in = 1;
        }

        if(v[arr[i][2]] == 1)
        {
            o++;
            in = 2;
        }
        else if(v[arr[i][2]] == 2)
        {
            tw++;
            in = 2;
        }
        else if(v[arr[i][2]] == 3)
        {
            th++;
            in = 2;
        }

        int cnt = o+th+tw;
        if(cnt == 0)
        {
            v[arr[i][0]] = 1;
            v[arr[i][1]] = 2;
            v[arr[i][2]] = 3;
        }
        else if(cnt == 1)
        {
            if(o == 1)
            {
                if(in == 0)
                {
                    v[arr[i][1]] = 2;
                    v[arr[i][2]] = 3;
                }
                else if(in == 1)
                {
                    v[arr[i][0]] = 2;
                    v[arr[i][2]] = 3;
                }
                else if(in == 2)
                {
                    v[arr[i][0]] = 2;
                    v[arr[i][1]] = 3;
                }
            }
            else if(th == 1)
            {
                if(in == 0)
                {
                    v[arr[i][1]] = 1;
                    v[arr[i][2]] = 2;
                }
                else if(in == 1)
                {
                    v[arr[i][0]] = 1;
                    v[arr[i][2]] = 2;
                }
                else if(in == 2)
                {
                    v[arr[i][0]] = 1;
                    v[arr[i][1]] = 2;
                }
            }
            else if(tw == 1)
            {
                if(in == 0)
                {
                    v[arr[i][1]] = 1;
                    v[arr[i][2]] = 3;
                }
                else if(in == 1)
                {
                    v[arr[i][0]] = 1;
                    v[arr[i][2]] = 3;
                }
                else if(in == 2)
                {
                    v[arr[i][0]] = 1;
                    v[arr[i][1]] = 3;
                }
            }
        }
    }
    Fo(i, 1, n+1)   cout << v[i] << " ";
    cout << endl;
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
