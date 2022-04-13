#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l;
    cin >> l;
    string s;
    cin.ignore(); //ignores nline
    getline(cin, s);
    int sl = 0, sr = 0;
    int flag = 0;
    for(int i=0; i<l; i++)
    {
        if(i < l/2) sl+=s[i];
        else sr+=s[i];
    }
    if(sl == sr) flag = 1;
    if(flag == 1)
    {
        if(l > 1)
        {
            if(s[l-2] != '4' && s[l-2] != '7')
            {
                cout <<"NO"<<endl;
            }
            else
            {
                cout<<"YES" <<endl;
            }
        }
        else
        {
            if(s[l-1] != '4' && s[l-1] != '7')
            {
                cout <<"NO"<<endl;
            }
            else cout <<"YES"<<endl;
        }
        return 0;
    }
    cout << "NO" << endl;
    return 0;
}