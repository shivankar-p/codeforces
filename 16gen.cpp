#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int max = 0, min = 0;
    for(int i = 1; i < n; i++){
        cin >> arr[i];
        if(arr[i] > arr[max])    max = i;
        else if(arr[i] <= arr[min]) min = i;
    }
    if(max < min)   cout << max+n-min-1 << endl;
    else
    {
        cout << max+n-min-2 << endl;
    }
    return 0;
}