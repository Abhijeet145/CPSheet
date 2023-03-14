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

ll n,k;
vl a,b;

bool isPossible(ll mid){
    ll curr = k;
    f0tn{
        curr -= max(a[i]*mid - b[i], 0LL);
        if(curr<0) return false;
    }
    return true;
}

void solve(ll tc)
{
    //start coding here
    
    cin >> n >> k;
    a.resize(n);
    b.resize(n);
    f0tn{
        cin >> a[i];
    }
    f0tn{
        cin >> b[i];
    }
    ll l=0,h=1e10;
    ll ans = 0;
    while(l<=h){
        ll mid = l+(h-l)/2;
        if(isPossible(mid)){
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
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

    ll t=1,tc=1;
    //cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}