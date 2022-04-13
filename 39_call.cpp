#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, z, tmp, k = 0;
    cin >> n >> m >> z;
    tmp = m;
    while(m <= z)
    {
        if(m%n == 0)    k++;
        m += tmp;
    }
    cout << k << endl;
    return 0;
}