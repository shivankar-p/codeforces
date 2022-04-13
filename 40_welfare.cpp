#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, max, out = 0;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    max = arr[0];
    for(int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if(arr[i] > max)    max = arr[i];
    }
    for(int i = 0; i < n; i++)
    {
        out += (max-arr[i]);
    }
    cout << out << endl;
    return 0;
}