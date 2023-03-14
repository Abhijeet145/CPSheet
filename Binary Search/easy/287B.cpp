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

bool isPossible(ll mid){
    return n <= (mid*(mid-1)/2+1);
}

void solve(ll tc)
{
    //start coding here
    
    cin >> n >> k;

    ll ans,total = k*(k-1)/2 + 1;
    if(n > total)
        ans = -1;
    else{
        ll l=0,h=k;
        while(l<=h){
            ll mid = l + (h-l)/2;//mid is the number of splitters required
            ll c = k - mid;//get left half 
            ll x = total-(((c*(c-1))/2)+1)+1;//get count of outlets in right half of mid
            if(x>=n){//if outlets are >=n we have our answer and we will procede our search in right side
                ans = mid;
                h = mid-1;
            } else {
                l = mid +1;
            }
        }
    }
 
    cout <<ans<<"\n";
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
