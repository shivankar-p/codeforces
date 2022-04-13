#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        int cnt = 0;
        vector<int> arr(n);
        for(int p=0; p<n; p++)  cin >> arr[p];
        if(n == 1) cout << "YES" << endl;
        else
        {
            sort(arr.begin(), arr.end());
            int i;
            for(i=1; i<n; i++)
            {
                if(arr[i]-arr[i-1] > 1)
                {
                    cout << "NO" << endl;
                    break;
                }
                else if(i == n-1)   cout << "YES" << endl;
            }
        }

    }
}