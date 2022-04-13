#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int rw, rh, w, h, x1, x2, y1, y2, ans, c = 0, t1, t2;
        cin >> rw >> rh;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> w >> h;
        if(y1 >= h || x1 >= w || rw-x2 >= w || rh-y2 >= h){cout << 0 << endl;}
        else
        {
            ans = INT_MAX;
            if(y1 < h)
            {
                if(h-y1+y2 <= rh)
                {
                    if(h-y1 < ans)ans = h-y1;
                }
            }
            if(rh-y2 < h)
            {
                if(y1-(h-(rh-y2)) >= 0)
                {
                    if((h-(rh-y2)) < ans)ans = (h-(rh-y2));
                }
            }
            if(x1 < w)
            {
                if(x2+w-x1 <= rw)
                {
                    if(w-x1 < ans)ans = w-x1;
                }
            }
            if(rw-x2 < w)
            {
                if(x1-(w+x2-rw) >= 0)
                {
                    if(w+x2-rw < ans)ans = w+x2-rw;
                }
            }
            if(ans != INT_MAX)  cout << ans << endl;
            else cout << -1 << endl;
        }

    }
    return 0;
}