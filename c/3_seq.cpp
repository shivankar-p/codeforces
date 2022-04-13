#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c = 0, tmp, x;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr, arr+n);

    for(int i = 0; i < n-c; i++)
    {
        if(arr[i] == arr[i+1])
        {
            x = i+1;
            
            while(arr[i+1] == arr[x])
            {
                x++;
            }
            
            x = x - i - 1;
            while(x--)
            {
                tmp = arr[i];
                c++;
                for(int j = i; j < n-1; j++)
                {
                    arr[j] = arr[j+1];
                }
                arr[n-c] = tmp;
            }
        }
    }
    if(c == 0)
    {
        cout << n << endl;
        for(int i = 0; i < n; i++)  cout << arr[i] << " ";
        cout << endl;
        cout << 0 << endl;
        cout << endl;
        return 0;
    }

    sort(arr+n-c, arr+n);
    
    

    int i;
    for(i = n-c; i < n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            cout << "NO" << endl;
            break;
        }
        cout << i << endl;
    }

    if(i == n-1)
    {
        cout << "YES" << endl;
        cout << n-c << endl;
        for(int i = 0; i < n-c; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
        cout << c << endl;
        for(int i = n-1; i >= n-c; i--)
        {
            cout << arr[i] << " ";
        }
        cout << endl;

    }
    return 0;
}