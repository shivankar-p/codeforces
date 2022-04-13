#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/

void solve() {
    int i, j, n, m, zr = 0, on = 0, inz = 0, ino = 0, ans = 0;
    cin >> n;
    int a[n];
    vector<int> za, oa;
    fo(i, n)
    {
        cin >> j;
        if(j % 2 == 0)
        {
            a[i] = 0;
            zr++;
            za.push_back(i);
        }
        else
        {
            a[i] = 1;
            on++;
            oa.push_back(i);
        }
    }
    if(n%2 == 0)
    {
        if(zr != on)
        {
            cout << -1 << endl;
            return;
        }
    }
    else
    {
        if(abs(zr-on) != 1)
        {
            cout << -1 << endl;
            return;
        }
    }
    fo(i, n-1)
    {
        //cout << a[i] << " " << a[i+1] << endl;
        if(i == 0 && n % 2 == 1)
        {
            if(zr > on)
            {
                if(a[0] == 1)
                {
                    a[0] = 0;
                    if(inz < za.size())
                    {
                        a[za[inz]] = 1;
                        ans += (za[inz]-i);
                        inz++;
                    }
                    
                }
            }
            else
            {
                if(a[0] == 0){
                a[0] = 1;
                if(ino < oa.size())
                {
                a[oa[ino]] = 0;
                ans += (oa[ino]-i);
                ino++;
                }
                }
            }
        }
        if(a[i] == a[i+1])
        {
            if(a[i] == 0)
            {
                if(n%2 == 1)
                {
                    if(zr > on)
                    {
                        a[i+1] = 1;
                        if(ino < oa.size()){
                        a[oa[ino]] = 0;
                        ans += (oa[ino]-i-1);
                        ino++;
                        }
                    }
                    else
                    {
                        a[i] = 1;
                        if(ino < oa.size()){
                        a[oa[ino]] = 0;
                        ans += (oa[ino]-i);
                        ino++;
                        }
                    }
                }
                else
                {
                    a[i+1] = 1;
                    if(ino < oa.size()){
                    a[oa[ino]] = 0;
                    ans += (oa[ino]-i-1);
                    ino++;
                    }
                }
            }
            else
            {
                if(n%2 == 1)
                {
                    if(zr > on)
                    {
                        a[i] = 0;
                        if(inz < za.size()){
                        a[za[inz]] = 1;
                        ans += (za[inz]-i);
                        inz++;
                        }
                    }
                    else
                    {
                        a[i+1] = 0;
                        if(inz < za.size()){
                        a[za[inz]] = 1;
                        ans += (za[inz]-i-1);
                        inz++;
                        }
                    }
                }
                else
                {
                    a[i+1] = 0;
                    if(inz < za.size()){
                    a[za[inz]] = 1;
                    ans += (za[inz]-i-1);
                    inz++;
                    }
                }
            }
        }
        //cout << a[i] << " " << a[i+1] << endl;
        
    }
    cout << ans << endl;
    
    
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
