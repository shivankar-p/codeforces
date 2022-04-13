#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n){
        string s;
        cin >> s;
        deque<char>q;
        char mx = 'a';
        for(int i = 0; i < s.length(); i++)
        {
            mx = max(mx, s[i]);
            q.push_front(s[i]);
        }
        if(mx != s.length()+96)
        {
            cout << "NO" << endl;
            n--;
            continue;
        }
        for(char x = mx; x >= 'a'; x--)
        {
            if(q.front() == x)  q.pop_front();
            else if(q.back() == x) q.pop_back();
            else
            {
                cout << "NO " << endl;
                break;
            }
        }
        if(q.size() == 0)   cout << "YES " << endl;
        n--;
    }
    return 0;
}