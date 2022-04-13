#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int r = 0, b = 0, ex = 0;
        string s;
        cin >> s;
        unordered_map<char, int> freq;
        //clr[s.size()] = {0};
        for(int i = 0; i < s.size(); i++)   freq[s[i]]++;
        for(auto x : freq)
        {
            if(x.second >= 2)
            {
                r++;
                b++;
            }
            else
            {
                ex+=x.second;
                if(ex >= 2)
                {
                    r++;
                    b++;
                    ex -= 2;
                }
            }
        }
        cout << r << endl;
    }
    return 0;
}