#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, c = 0;
        cin >> n;
        char arr[n];
        for(int i = 0; i < n; i++)  cin >> arr[i];
        stack<char> s;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] == '(')   s.push('(');
            else
            {
                if(s.size() != 0)   s.pop();
                else
                {
                    c++;
                    for(int j = i; j < n-1; j++)
                    {
                        arr[i] = arr[i+1];
                    }
                    arr[n-1] = '(';
                }
            }
        }
        cout << c << endl;
    }
}