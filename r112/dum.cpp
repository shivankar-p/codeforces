#include <bits/stdc++.h>

using namespace std;

bool fun(int a, int b, int c)
{
    if(a == 0 && b == 0 && c == 0)  return 1;
    else if(a == 0 || b == 0 || c == 0) return 0;
	int arr[3], x;
	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	sort(arr, arr+3);
	
    x = fun(arr[0]-1, arr[1]-1, arr[2]-2);
    return x;
}

int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, b, c, m, mn;
		cin >> a >> b >> c;
		if(fun(a, b, c) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
		
	}
	return 0;
}