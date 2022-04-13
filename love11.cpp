#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, min, max, el, o = 0;
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        cin >> el;
        if(i == 1)
        {
            min = el;
            max = el;
        }
        else
        {
            if(el > max)
            {
                max = el;
                o++;
            }
            else if(el < min)
            {
                min = el;
                o++;
            }
        }
    }
    cout << o << endl;
    return 0;
}