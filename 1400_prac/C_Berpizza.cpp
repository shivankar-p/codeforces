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

int cnt = 1;

void solve() {
    int i, j, n, m;
    int q;
    cin >> q;
    set<pair<int, int>> st, st2;
    unordered_map<int, int> mp;
    fo(i, q)
    {
        cin >> m;
        
        if(m == 1)
        {
            cin >> n;
            st.insert({n, cnt});
            st2.insert({cnt, n});
            cnt++;
        }
        else if(m == 2)
        {
            auto it = st2.begin();
            st2.erase(it);
            cout << (*it).f << " ";
            st.erase({(*it).s, (*it).f});
        }
        else
        {
            auto it = st.end();
            it--;
            int nu = (*it).f, fg = 0;
            //cout << nu << endl;
            //cout << st.size() << endl;
            while(1)
            {
                if((*it).f != nu || (it == st.begin()))
                {
                    break;
                }
                fg = 1;
                it--;
            }
            if((*it).f != nu)   it++;
            //cout << (*it).f << endl;

            st.erase(it);
            cout <<  (*it).s << " ";
            st2.erase({(*it).s, (*it).f});
        }
    }
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
