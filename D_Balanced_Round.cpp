#include <bits/stdc++.h>
using namespace std;

// Short forms
#define ll                  long long
#define ull                 unsigned long long
#define nl                  '\n'
#define ff                  first
#define ss                  second
#define all(x)              x.begin(), x.end()
#define sz(x)               (int)(x).size()
#define pb                  push_back
#define mp                  make_pair

// Loops
#define nlp(i, n)           for (int i = 0; i < (int)(n); ++i)
#define lp(i, a, b)         for (int i = (int)(a); i < (int)(b); ++i)
#define rlp(i, a, b)        for (int i = (int)(a); i > (int)(b); --i)
#define llp(i,a,b)          for (ll i= (ll)(a); i < (ll)(ll)(b); ++i)

// STLs
#define pii                 pair<int, int>
#define vi                  vector<int>
#define vll                 vector<ll>
#define vvi                 vector<vector<int>>
#define vvl                 vector<vector<ll>>

// Outputs
#define yes                 cout<<"YES"<<nl
#define no                  cout<<"NO"<<nl
#define dbg(x)              cerr << #x <<" " << x << endl;

// Constants
#define PI                  3.141592653589793238
#define INF                 LONG_LONG_MAX
#define MOD                 1e9+7

// Faster Input Output
#define FAST_IO             (ios_base:: sync_with_stdio(false),cin.tie(NULL));

// Maths
ll fact(ll n)          { if(n==0) return 1; ll res = 1; for (ll i = 2; i <= n; i++) res = res * i; return res; }
ll nPr(ll n, ll r)     { return fact(n) / fact(n - r); }
ll nCr(ll n, ll r)     { return fact(n) / (fact(r) * fact(n - r)); }
ll gcd(ll a, ll b)     { if (b == 0) return a; return gcd(b, a % b); }
ll lcm(ll a, ll b)     { return (a * b) / gcd(a, b); }
ll mypow(ll a, ll b)   { ll ans = 1; while(b){ if (b&1) ans = (ans*a) ; b /= 2; a = (a*a); } return ans; }
bool isPrime(ll n)     { if(n <= 1) return false; for(ll i = 2; i <= sqrt(n); i++) if(n % i == 0) return false; return true; }
int lll(const vector<int>& arr, int k) {
   int n = arr.size();
    if (n == 0) return 0;

    int ans = 0; // Length of longest subarray with at least one element
    int temp = 0;

    for (int i = 1; i < n; ++i) {
        if (arr[i] - arr[i - 1] <= k) {
            temp++;
        } else {
            ans = max(temp + 1, ans);
            temp = 0;
        }
    }
    // Final check to update ans with the last valid subarray
    ans = max(temp + 1, ans);

    return ans;
}
int main() {
       int t;
       cin>>t;
       while(t--){
              int n,k;
              cin>>n>>k;
              vector<int> arr(n);
              nlp(i,n) cin>>arr[i];
              if(n==1) {
                     cout<<0<<endl;
                     continue;
              }
              sort(arr.begin(),arr.end());
              int ans=  lll(arr,k);
              int temp=0;
           
            cout<<n-ans<<endl;
       }
       return 0;
}