#include <bits/stdc++.h> 
using namespace std;
/*-------------------------------------------------------------------*/
#define INF 1e18
#define fastio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define lli long long int
#define ll long long
#define pb emplace_back
#define ppb pop_back
#define ff first
#define ss second
#define FF FIRST 
#define SS SECOND 
#define setbits __builtin_popcountll
#define clz __builtin_clzll
#define ctz __builtin_ctzll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define pii  pair<int,int>
#define rep(i,a,n) for(ll i=a;i<(n);++i)
#define repo(i,a,b) for(lli i=a;i<=b;++i)
#define per(i,a,b) for(lli i=a;i>=b;i--)
#define mp make_pair
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN
#define sum(a) (accumulate((a).begin(),(a).end(),0ll))
#define sorted(a)  (sort((a).begin(),(a).end()))
#define countx(v,x) (count(all(v),x))  
#define minel(a) (*min_element((a).begin(),(a).end()))
#define maxel(a) (*max_element((a).begin(),(a).end()))
#define maxidx(a) (max_element((a).begin(),(a).end())-(a).begin())
#define minidx(a) (min_element((a).begin(),(a).end())-(a).begin())
#define lb(a,x)   (lower_bound((a).begin(),(a).end(),(x))-(a).begin())
#define ub(a,x)  (upper_bound((a).begin(),(a).end(),(x))-(a).begin())
#define vi vector<int> 
#define vll vector<long long>
/*48-57 -> 0-9
* 65-90 -> A-Z
* 97-122 -> a-z 
	size_t found = str.find(s);
	if (found != string::npos)
		cout << "YES"<< endl;
	else cout<<"NO"<<endl;
*/
ll gcd(ll a, ll b) {if (b > a) {return gcd(b, a);} if (b == 0) {return a;} return gcd(b, a % b);}
vector<ll> sieve(int n) {int*arr = new int[n + 1](); vector<ll> vect; for (int i = 2; i <= n; i++)if (arr[i] == 0) {vect.push_back(i); for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return vect;}
vi frequency(vi v){map<ll,ll>mp;for(int i = 0 ; i<int(v.size());i++){mp[v[i]]++;}vi ans ;for(auto x:mp){ans.push_back(x.second);}return ans;}
int lcs(string s,string v){int n = s.size();int m = int(v.size());vector<vector<int>> dp(n+1,vector<int>(m+1,-1));repo(i,0,n) dp[i][0] = 0;repo(i,0,m) dp[0][i] = 0;repo(i,1,n){repo(j,1,m){if(s[i-1]==v[j-1]){dp[i][j] = 1 + dp[i-1][j-1];}else{dp[i][j] = max(dp[i-1][j],dp[i][j-1]);}}}return dp[n][m];}


/*---------------------------Code Begins---------------------------------------*/
void solve(){
  int n ;cin>>n;
  string s1;cin>>s1;
  transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
  string ans = "MEOW";
  string tar = "";
  tar+=s1[0];
  rep(i,1,n){
    if(s1[i-1]!=s1[i])tar+=s1[i];	
  }
  if(tar==ans){
    cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
signed main() {
fastio();

int testcase = 1 ;
cin>>testcase;
while(testcase--)solve();

}
