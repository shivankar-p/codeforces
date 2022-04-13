#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, A = 0, D = 0;
    cin >> n;
    char arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
        if(arr[i] == 'A')   A++;
        else D++;
    }
    if(A == D)  cout << "Friendship" << endl;
    else if(A > D) cout << "Anton" << endl;
    else cout << "Danik" << endl;
    return 0;
}