#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int out = 0;
    getline(cin, s);
    unordered_map<char, int> m;
    while(s.size() != 0)
    {
        m[s[s.size()-1]]++;
        s.pop_back();
    }
    for(auto x : m)
    {
        out++;
    }

    if(out%2 == 0) cout << "CHAT WITH HER!" << endl;
    else    cout << "IGNORE HIM!" << endl;
    
    return 0;
}