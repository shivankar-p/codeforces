#include<bits/stdc++.h>
using namespace std;
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define mod 1000000007
//vector<vector<int>> a(n , vector<int>(m, 0));

/*=======================*/
bool cmp(int &a, int &b)
{
    return a > b;
}

void solve() {
    int i, j, n, m, a = 0, b = 0, fg = 0;
    cin >> n;
    vector<int> e, o;
    fo(i, n)
    {
        cin >> j;
        if(j%2) o.push_back(j);
        else e.push_back(j);
    }
    sort(e.begin(), e.end(), cmp);
    sort(o.begin(), o.end(), cmp);
    i = 0;
    j = 0;
    //cout << e.size() << " " << o.size() << endl;
    while((i < e.size()) && (j < o.size()))
    {
        //cout << e[i] << " " << o[j] << endl;
        if(e[i] > o[j])
        {
            a += e[i];
            i++;
        }
        else
        {
            j++;
        }
        fg = 1;
        if((i < e.size()) && (j < o.size()))
        {
            if(e[i] > o[j])
            {
                i++;
            }
            else
            {
                b += o[j];
                j++;
            }
            fg = 0;
        }
    }
    while(i < e.size())
    {
        if(fg)
        {
            if(e[i] % 2 == 1)   b+=e[i];
            else i++;

            if(i < e.size())
            {
                if(e[i] % 2 == 0)   a+=e[i];
                else i++;
            }
        }
        else
        {
            if(e[i] % 2 == 0)   a+=e[i];
            else i++;

            if(i < e.size())
            {
                if(e[i] % 2 == 1)   b+=e[i];
                else i++;
            }

        }
    }

    while(j < o.size())
    {
        if(fg)
        {
            if(o[j] % 2 == 1)   b+=o[j];
            else j++;

            if(j < o.size())
            {
                if(o[j] % 2 == 0)   a+=o[j];
                else j++;
            }
        }
        else
        {
            if(o[j] % 2 == 0)   a+=o[j];
            else j++;

            if(j < o.size())
            {
                if(o[j] % 2 == 1)   b+=o[j];
                else j++;
            }

        }
    }
    if( a > b)  cout << "Alice" << endl;
    else if(b > a) cout << "Bob" << endl;
    else cout << "Tie" << endl;
}

int32_t main() {
    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}
