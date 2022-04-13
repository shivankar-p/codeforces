#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    float out = 0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        out += arr[i];
    }
    printf("%.6f\n", out/n);

}