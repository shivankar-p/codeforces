#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long int n;
    cin >> n;
    unordered_map<int,int> m;
    while(n != 0)
    {
        m[n%10]++;
        n/=10;
    }
    int x = m[4]+m[7];
    int f = 0;
    while (x != 0)
    {
        f = 1;
        if(x%10 == 4 || x%10 == 7)  x /= 10;
        else    break;
    }
    if(x==0 && f == 1)    cout<<"YES"<< endl;
    else cout<<"NO"<<endl;
    
    return 0;
}