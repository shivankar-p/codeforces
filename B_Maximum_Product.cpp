#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/

void solve() {
    int i, j, n, m, cnt = 0, sgn = 0, pdt = 1, fg;
    cin >> n;
    vector<pair<int,int>> a(n);
    fo(i, n)
    {
        cin >> a[i].first;
        if(a[i].first >= 0) a[i].second = 1;
        else a[i].second = -1;
        a[i].first = abs(a[i].first);
    }
    sort(a.begin(), a.end());
    i = n-1;
    while(i != n-6)
    {
        if(a[i].second == -1) cnt++;
        pdt *= (a[i].first*a[i].second);
        i--;
    }
    cout << pdt << endl;
    if(cnt % 2 == 0)    cout << pdt << endl;
    else
    {
        sgn = a[n-5].second;
        if(sgn == 1)
        {
            i = n-5;
            while(i >= 0)
            {
                if(a[i].second == -1)
                {
                    if(pdt != 0)    pdt = pdt/(a[n-5].first*a[n-5].second);
                    pdt *= (a[i].first*a[i].second);
                    cout << pdt << endl;
                    return;
                }
                i--;
            }
            if(i == -1)
            {
                i = n-5;
                while(i < n)
                {
                    if(a[i].second == -1)
                    {
                        j = n-5;
                        while(j >= 0)
                        {
                            if(a[j].second == 1)
                            {
                                if(pdt != 0)    pdt = pdt/(a[i].first*a[i].second);
                                pdt *= (a[j].first*a[j].second);
                                cout << pdt << endl;
                                return;
                            }
                            i--;
                        }
                    }
                    i++;
                }
            }
        }
        else
        {
            i = n-5;
            while(i >= 0)
            {
                //cout << a[i].first << " " << a[i].second << endl;
                if(a[i].second == 1)
                {
                    if(pdt != 0)    pdt = pdt/(a[n-5].first*a[n-5].second);
                    pdt *= (a[i].first*a[i].second);
                    cout << pdt << endl;
                    return;
                }
                i--;
            }
            if(i == -1)
            {
                i = n-5;
                while(i < n)
                {
                    if(a[i].second == 1)
                    {
                        j = n-6;
                        while(j >= 0)
                        {
                            if(a[j].second == -1)
                            {
                                if(pdt != 0)    pdt = pdt/(a[i].first*a[i].second);
                                pdt *= (a[j].first*a[j].second);
                                cout << pdt << endl;
                                return;
                            }
                            i--;
                        }
                    }
                    i++;
                }
            }
        }
        cout << pdt << endl;
    }
    
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
