#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}


/*=======================*/

void solve() {
    int i, j, n, m;
    cin >> n;
    vector<pair<int,int>> a(n);
    fo(i, n)
    {
        cin >> a[i].first;
        a[i].second = i+1;
    }
    if(is_sorted(a.begin(), a.end()))  cout << "NO X" << endl;
    else
    {
        sort(a.begin(), a.end());
        fo(i, n)
        {
            if(abs(i+1-a[i].second)% 2 != 0)
            {
                cout << "NO Y" << endl;
                cout << i+1 << endl;                return;
            }
        }
        cout << "YES" << endl;
    }

}

int32_t main() {
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    srand(chrono::high_resolution_clock::now().time_since_epoch().count());
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
