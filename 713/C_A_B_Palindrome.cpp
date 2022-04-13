#include<bits/stdc++.h>
using namespace std;
#define gc getchar_unlocked
#define fo(i,n) for(i=0;i<n;i++)
#define Fo(i,k,n) for(i=k;k<n?i<n:i>n;k<n?i+=1:i-=1)
#define ll long long
#define int long long
#define si(x)	scanf("%d",&x)
#define sl(x)	scanf("%lld",&x)
#define ss(s)	scanf("%s",s)
#define pi(x)	printf("%d\n",x)
#define pl(x)	printf("%lld\n",x)
#define ps(s)	printf("%s\n",s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define clr(x) memset(x, 0, sizeof(x))
#define sortall(x) sort(all(x))
#define tr(it, a) for(auto it = a.begin(); it != a.end(); it++)
#define PI 3.1415926535897932384626
typedef pair<int, int>	pii;
typedef pair<ll, ll>	pl;
typedef vector<int>		vi;
typedef vector<ll>		vl;
typedef vector<pii>		vpii;
typedef vector<pl>		vpl;
typedef vector<vi>		vvi;
typedef vector<vl>		vvl;
mt19937_64 rang(chrono::high_resolution_clock::now().time_since_epoch().count());
int rng(int lim) {
	uniform_int_distribution<int> uid(0,lim-1);
	return uid(rang);
}
int mpow(int base, int exp); 
void ipgraph(int n, int m);
void dfs(int u, int par);

const int mod = 1'000'000'007;
const int N = 3e5, M = N;
//=======================

vi g[N];
int a[N];

void solve() {
  int a, b, i, n, q = 0;
  cin >> a >> b;
  string s;
  cin >> s;
  n = s.length();
  fo(i, s.length())
  {
      if(s[i] == '1') b--;
      else if(s[i] == '0')    a--;
      else q++;
  }

  if(a < 0 || b < 0)
  {
    cout << -1 << endl;return;
  }
 
  if(q == 0)
  {
    fo(i, n/2)
    {
      if(s[i] != s[n-i-1])
      {
        cout << -1 << endl;return;
      }
    }
  }
  if(n == 1)
  {
    if(a>0) s[0] = '0';
    else s[0] = '1';
    cout << s[0] << endl;return;
  }
  for(i = 0; i < n/2; i++)
  {
    if(s[i] == '?' && s[n-i-1] != '?')
    {
      s[i] = s[n-i-1];
      if(s[n-i-1] == '1')  b--;
      else a--;
      
    }
    else if(s[n-i-1] == '?' && s[i] != '?')
    {
      s[n-i-1] = s[i];
      if(s[i] == '1')  b--;
      else a--;
    }
  }
  
  for(i = 0; i < n/2; i++)
  {
    if(s[i] == '?')
    {
      if(a >= 2)
      {
        s[i] = '0';
        s[n-i-1] = '0';
        a -= 2;
      }
      else if(b >= 2)
      {
        s[i] = '1';
        s[n-i-1] = '1';
        b -= 2;
      }
      else
      {
        cout << -1 << endl;return;
      }
    }
  }
  if(s[n/2] == '?')
  {
    if(a) s[n/2] = '0';
    else s[n/2] = '1';
  }
  fo(i, n/2)
  {
    if(s[i] != s[n-i-1])
    {
      cout << -1 << endl;return;
    }
  }
  cout << s << endl;
  
}

int32_t main() {
    //ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    //srand(chrono::high_resolution_clock::now().time_since_epoch().count());

    int t = 1;
    cin >> t;
    while(t--) {
      solve();
    }

    return 0;
}

int mpow(int base, int exp) {
  base %= mod;
  int result = 1;
  while (exp > 0) {
    if (exp & 1) result = ((ll)result * base) % mod;
    base = ((ll)base * base) % mod;
    exp >>= 1;
  }
  return result;
}


