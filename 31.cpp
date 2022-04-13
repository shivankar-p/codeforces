#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    float a, b;
    a = (-1+sqrt(1+8*n))/2.0;
    b = (-1-sqrt(1+8*n))/2.0;
    //cout << a << b << endl;
    if((ceil(a) == a && a > 0) || (ceil(b) == b && b > 0))   cout << "YES" << endl;
    else    cout << "NO" << endl;
    return 0;
}