#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int r = n % 10;
    int tmp = r, i = 0;
    while(r % 10 != k && r % 10 != 0)
    {
        r += tmp;
        i++;
    }
    cout << i+1 << endl;
    return 0;
}