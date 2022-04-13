#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
#define vi vector<int>
#define f first
#define s second
#define pb push_back
int mfun(int i, int m)
{
    if(i < 0)   return m-(abs(i)%m);
    else return i%m;
}
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    vi arr(n);
    fo(i, n)    cin >> arr[i];
    int fg = 0;
    int a = -1, b = -1;
    fo(i, n-1)
    {
        if(arr[i] > arr[i+1] && fg == 0)
        {
            fg = 1;
            a = i;
            continue;
        }

        if(arr[i] < arr[i+1] && fg == 1)
        {
            fg = 2;
            b = i;
            continue;
        }

        if(arr[i] > arr[i+1] && fg == 2)
        {
            cout << "no" << endl;
            return;
        }
    }
    if(fg == 1) b = n-1;
    if(a == -1 && b == -1)
    {
        cout << "yes" << endl;
        cout << 1 << " " << 1 << endl;
        return;
    }
    //cout << a << " " << b << endl;
    if(a == 0 && b ==n-1)
    {
        cout << "yes" << endl;
        cout << a+1 << " " << b+1 << endl;
        return;
    }
    else if(a != 0 && b != n-1)
    {
        if(arr[b] >= arr[a-1] && arr[a] <= arr[b+1])
        {
            cout << "yes" << endl;
            cout << a+1 << " " << b+1 << endl;
            return;
        }
        else cout << "no" << endl;
    }
    else if(b != n-1)
    {
        if(arr[a] <= arr[b+1])
        {
            cout << "yes" << endl;
            cout << a+1 << " " << b+1 << endl;
            return;
        }
        else cout << "no" << endl;
    }
    else
    {
        if(arr[b] >= arr[a-1])
        {
            cout << "yes" << endl;
            cout << a+1 << " " << b+1 << endl;
            return;
        }
        else    cout << "no" << endl;
    }
    return;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    //cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
