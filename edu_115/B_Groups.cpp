#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    bool arr[n][5];
    vector<int> v(5, 0);
    fo(i, n)
    {
        fo(j, 5)
        {
            cin >> arr[i][j];
            if(arr[i][j])
            {
                v[j]++;
            }
        }
    }

    int cnt = 0;
    vector<int> in;
    fo(i, 5)
    {
        if(v[i] >= n/2)
        {
            cnt++;
            //cout << v[i] << endl;
            in.push_back(i);
        }
    }
    if(cnt < 2)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        int k;
        fo(i, in.size())
        {
            for(k = i+1; k < in.size(); k++)
            {
                int f = 0, s = 0, b = 0;
                fo(j, n)
                {
                    if(arr[j][in[i]] && arr[j][in[k]])  b++;
                    else if(arr[j][in[i]])  f++;
                    else if(arr[j][in[k]]) s++;
                }
                //cout << f << " " << s << " " << b << endl;
                if(b >= n-f-s)
                {
                    cout << "YES" << endl;
                    return;
                }
            }
            //sort(ar1.begin(), ar1.end());
            
        }
    }
    cout << "NO" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
