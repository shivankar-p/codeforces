#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    int i;
    for(i = 0; i < s1.length(); i++)
    {
        if(!(s1[i] == s2[i] || abs(s1[i]-s2[i]) == 32))
        {
            if(s1[i] < s2[i])
            {
                cout << -1 << endl;
                return 0;
            }
            else if(s1[i] > s2[i])
            {
                cout << 1 << endl;
                return 0;
            }
        }
    }
    if(i == s1.length())  cout << 0 << endl;
    return 0;
}