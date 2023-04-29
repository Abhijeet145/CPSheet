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
#define ALL(v) v.begin(),v.end() 

////////////////////////Template ends////////////////////////




void solve(ll tc)
{
    //start coding here
    ll c,sum;
    cin >> c >> sum;
    ll val=0;
    
    if(sum>c){
        val = sum/c;
        sum = sum%c;
    }
    vl v(c,val);
    ll ans = 0;
    for(int i=0;i<c;i++){
        if(sum-->0){
            ans += (v[i]+1)*(v[i]+1);
        } else {
            if(v[i]==0)break;
            ans += v[i]*v[i];
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
    cin >> t;
    while(t--)
    {
        solve(tc++);
    }
    return 0;
}