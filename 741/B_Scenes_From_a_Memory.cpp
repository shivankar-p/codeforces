#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007

/*=======================*/
bool is_prime(int lm)
{
    int i = 1;
    int cnt = 0;
    while(i <= lm)
    {
        if(lm % i == 0) cnt++;
        i++;
    }
    if(cnt > 2) return 0;
    else return 1;
}

void solve() {
    int i, j, n, m, cnt = 0, in, q, lm, a, b;
    char x;
    string s;
    unordered_map <int, int> mp;
    cin >> n;
    cin >> s;
    fo(i, n)
    {
        mp[s[i]-48]++;
        j = s[i]-48;
        if(!(j == 2 || j == 3 || j == 5 || j == 7))
        {
            cnt ++;
            x = s[i];
        }
    }
    if(cnt == 0)
    {
        if(n <= 2){
        cout << n << endl;
        cout << s << endl;
        return;
        }
        else
        {
            for(auto l : mp)
            {
                if(l.second >= 2)
                {
                    cout << 2 << endl;
                    cout << l.first << l.first << endl;
                    return;
                }
            }
            if(mp.size() == 3)
            {
                
                a = s[1]-48;
                b = s[2]-48;
                lm = a*10+b;
                if(!(is_prime(lm)))
                {
                    cout << n-1 << endl;
                    cout << lm << endl;
                    return;
                }

                a = s[0]-48;
                b = s[2]-48;
                lm = a*10+b;
                if(!(is_prime(lm)))
                {
                    cout << n-1 << endl;
                    
                    cout << lm << endl;
                    return;
                }

                a = s[0]-48;
                b = s[1]-48;
                lm = a*10+b;
                if(!(is_prime(lm)))
                {
                    cout << n-1 << endl;
                    
                    cout << lm << endl;
                    return;
                }
                
            }
            cout << 2 << endl;
            cout << 27 << endl;
        }
    }
    else
    {
        cout << 1 << endl;
        cout << x << endl;
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
