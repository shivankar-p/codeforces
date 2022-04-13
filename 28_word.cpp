#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int bld = 0, sm = 0;
    for(int i = 0; i < s.length();i++)
    {
        if(s[i] >= 97)  sm++;
        else    bld++;
    }
    if(sm >= bld)
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] < 97)   s[i]+=32;
        }
    }
    else
    {
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] >= 97)   s[i]-=32;
        }
    }
    cout << s << endl;
}