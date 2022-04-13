#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t)
    {
        int sx, sy, dx, dy, ox, oy;
        cin >> sx >> sy;
        cin >> dx >> dy;
        cin >> ox >> oy;
        int ans = 0;
        ans += abs(sy-dy);
        if(((oy > sy && oy < dy) || (oy < sy && oy > dy)) && ox == sx)    ans += 2;
        ans += abs(sx-dx);
        if(((ox > sx && ox < dx) || (ox < sx && ox > dx)) && oy == sy)    ans += 2;
        cout << ans << endl;
        t--;
    }
    return 0;
}  