#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, s, dest;
    cin >> n >> k;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'G')   s = i;
        if(arr[i] == 'T')   dest = i;
    }
    if(s < dest)
    {
        while(s != dest)
        {
            if(s+k < n)
            {
                if(arr[s+k] != '#') s += k;
                else break;
            }
            else break;
        }
        //cout << s << dest << endl;
        if(s == dest)   cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    else
    {
        while(s != dest)
        {
            if(s-k >= 0)
            {
                if(arr[s-k] != '#') s -= k;
                else break;
            }
            else break;
        }
        //cout << s << dest << endl;
        if(s == dest)   cout << "YES" << endl;
        else    cout << "NO" << endl;
    }
    return 0;
}