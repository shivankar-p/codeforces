#include<bits/stdc++.h>

using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    int i = 0;
    for(i = 0; i < a.length(); i++)
    {
        if(a[i] != b[a.length()-i-1]) break;
    }
    if(i == a.length())   cout << "YES" << endl;
    else    cout << "NO" << endl;
    return 0;
}