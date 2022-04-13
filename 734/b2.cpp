#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k, extr = 0;
        cin >> n >> k;
        int arr[n], clr[n] = {0};
        vector<int> lft;
        unordered_map<int, int> m;
        unordered_map<int, vector<int>> m2;
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
            m[arr[i]]++;
            m2[arr[i]].push_back(i);
        }
        if(n == k)
        {
            for(int i = 1; i <= n; i++) cout << i << " ";
            cout << endl;
            continue;
        }
        for(auto x: m)
        {
            if(x.second >= k)
            {
                /*extr = x.second-k;
                for(int i=0; i<extr; i++)
                {
                    lft.push_back(m2[x.first][k+i]);
                }*/
                for(int i = 1; i <= k ; i++)
                {
                    clr[m2[x.first][0]] = i;
                    m2[x.first].erase(m2[x.first].begin());
                }
            }
            else
            {
                extr += x.second;
                for(int i=0; i<x.second; i++)
                {
                    lft.push_back(m2[x.first][i]);
                }
                while(extr >= k)
                {
                    if(extr >= k)
                    {
                        for(int i = 1; i <= k ; i++)
                        {
                            clr[lft[0]] = i;
                            lft.erase(lft.begin());
                        } 
                        extr -= k;
                    }
                }
            }
        }
        for(int i = 0; i < n; i++)  cout << clr[i] << " ";
        cout << endl;
        m.clear();
        m2.clear();
        
    }
    return 0;
}