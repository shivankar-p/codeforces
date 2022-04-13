#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin>>n;
    int arr[n];
    for(int i=1; i<=n; i++)
    {
        cin >> x;
        arr[x] = i;
    }
    for(int i=1; i<=n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}