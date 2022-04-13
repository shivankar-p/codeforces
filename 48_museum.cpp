#include <bits/stdc++.h>

using namespace std;

int func(char a, char b)
{
    return min(abs(b-a), 26-abs((b-a)));
}
int main()
{
    string s;
    cin >> s;
    int out = 0;
    char st = 'a';
    for(int i = 0; i < s.length(); i++)
    {
        out += func(st, s[i]);
        st = s[i];
    }
    cout << out << endl;
    return 0;
}