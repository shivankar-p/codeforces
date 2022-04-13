#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    cin >> n;
    int m = 1;
    while(m <= 1000)
    {   c = 0;
        for(int i = 1; i <= (n*m)+1; i++){
            if(((n*m)+1)%i == 0)    c++;
        }
        if(c != 2)
        {
            cout << m << endl;
            break;
        }
        m++;
    }
    return 0;
}