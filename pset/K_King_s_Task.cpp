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
    int i, j, n, m, ans = 0;
    cin >> n;
    vector<int> v(n+1), s(n+1);
    v[0] = INT_MIN;
    Fo(i, 1, n+1)
    {
        cin >> v[i];
        s[i] = v[i];
    }
    sort(s.begin(), s.end());
    Fo(i, 1, n+1)
    {
        auto it = find(s.begin(), s.end(), v[i]);
        j = it-v.begin();
        if(j % 2 == 0)
        {
            if(j-1 == i)
            {
                swap(v[j-1], v[i]);
                ans++;
            }
            else
            {
                if(i > n)
                {
                    if(i-n == j)
                    {
                        ans++;
                        swap(v[i-n], v[j]);
                    }
                    else
                    {
                        if(j % 2 == 0 && i-n == j-1)
                        {
                            ans += 2;
                            swap(v[j], v[j-1]);
                            swap(v[j], v[i]);
                        }
                        else if(j % 2 == 1 && i-n == j+1)
                        {
                            ans += 2;
                            swap(v[j], v[j+1]);
                            swap(v[j], v[i]);
                        }
                        else
                        {
                            cout << -1 << endl;
                            return;
                        }
                    }
                }
                else
                {
                    if(i+n == j)
                    {
                        ans++;
                        swap(v[i], v[j]);
                    }
                    else
                    {
                        if(j % 2 == 0 && i+n == j-1)
                        {
                            ans += 2;
                            swap(v[j], v[j-1]);
                            swap(v[j], v[i]);
                        }
                        else if(j % 2 == 1 && i+n == j+1)
                        {
                            ans += 2;
                            swap(v[j], v[j+1]);
                            swap(v[j], v[i]);
                        }
                        else
                        {
                            cout << -1 << endl;
                            return;
                        }
                    }
                }
            }
        }
        cout << ans << endl;
    }

    cout << ans << endl;


}

int32_t main() {
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
