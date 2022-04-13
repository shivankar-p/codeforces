#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if(b < 2 || c < 4)  cout << 0 << endl;
    else
    {
        while(b < 2*a)  a--;
        while(c < 4*a) a--;
        cout << 7*a << endl;
    }
    return 0;
}