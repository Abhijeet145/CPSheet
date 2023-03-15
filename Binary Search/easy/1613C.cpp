#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;

//Macros (they replace the words with exact code so be careful while using them)
#define F first
#define S second
#define B begin()
#define E end()
#define GI greater<int>
#define PB push_back
#define MP make_pair
#define LB lower_bound
#define UB upper_bound
#define FOR(i,a,b) for(ll i = a;i < b; i++)
#define f0tn for(ll i=0;i<n;i++)

////////////////////////Template ends////////////////////////

ll n,h;
vl a;
bool isPossible(ll k){
    ll cd = 0;//current damage
    ll pr = 0;//previous range
    f0tn{
        ll nr = a[i] + k - 1;
        cd += min(nr - pr,k);
        pr = nr;
    }
    
    return cd >= h;
}

void solve(ll tc)
{
    //start coding here
    cin >> n >> h;
    a.resize(n);
    f0tn{
        cin >> a[i];
    }
    
    ll ans = 1;
    ll l=1,h=1e18+1;
    while(l<=h){
        ll mid = l + (h-l)/2;
        if(isPossible(mid)){
            ans = mid;
            h = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout <<ans <<"\n";
}

////////////////// main function to call test cases//////////////
int main()
{
    //to raad and write files from text files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    //for faster input and output operations
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll t,tc=1;
    cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}