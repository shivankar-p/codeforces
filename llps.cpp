#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    char mx;
    int cnt = 0;
    getline(cin, s);
    mx = s[0];
    cnt++;
    for(int i = 1; i < s.size(); i++)
    {
        if(s[i] > mx)
        {
            mx = s[i];
            cnt = 1;
        }
        else if(s[i] == mx) cnt++;
    }
    for(int i = 0; i < cnt; i++)    cout<<mx;
    cout << endl;
    return 0;
}