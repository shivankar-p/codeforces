#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, ans = INT_MAX;
        cin >> m;
        if(m == 1)
        {
          cout << 0 << endl;
          continue;}
        int a[m] = {0}, b[m] = {0}, pa[m] = {0} , pb[m] = {0};
        cin >> a[0];
        pa[0] = a[0];
        for(int i = 1; i < m; i++)
        {
            cin >> a[i];
            pa[i] = pa[i-1]+a[i];
        }
        cin >> b[0];
        pb[0] = b[0];
        for(int i = 1; i < m; i++)
        {
            cin >> b[i];
            pb[i] = pb[i-1]+b[i];
        }
        for(int i = 1; i < m-1; i++)
        {
            if(max(pa[m-1]-pa[i], pb[i-1]) < ans)   ans = max(pa[m-1]-pa[i], pb[i-1]);
        }
        if(pa[m-1]-pa[0] < ans) ans = pa[m-1]-pa[0];
        if(pb[m-2] < ans)   ans = pb[m-2];
        cout << ans << endl;
    }
    return 0;
}

