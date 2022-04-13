#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    n-=10;
    if(n < 10 && n >= 2) cout << 4 << endl;
    else if(n == 1 || n == 11) cout << 4 << endl;
    else if(n == 10) cout << 15 << endl;
    else cout << 0 << endl;
    return 0;
}