#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int i = 1;
    while(1)
    {
        if(m-i >= 0)
        {
            m = m-i;
            if(i == n)  i = 0;
            else    i++;
        }
        else    break;
    }
    cout << m << endl;
    return 0;
}