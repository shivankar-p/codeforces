#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, t = 0;
    cin >> n >> k;
    t = k;
    int i = 1;
    while(t+(5*i) <= 240)
    {
        t += 5*i;
        i++; 
    }
    if(i-1 >= n)  cout << n << endl;  
    else cout << i-1 << endl;
    return 0;
}