#include<bits/stdc++.h>

using namespace std;

int main()
{
    /*int n, o = 0;
    int di[n-1];
    cin >> n;
    for(int i = 0; i < n-1; i++)  cin >> di[i];
    int a, b;
    cin >> a >> b;
    for(int i = a; i < b; i++) o+=di[i-1];
    cout << o << endl;
    return 0;*/
    int arr[101];
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
	   cin>>arr[i]; 
	}
	int a,b;
	cin>>a>>b;
	int result=0;
	for(int i=a-1;i<b-1;i++){
	    result+=arr[i];
	}
	cout<<result;
	return 0;
}