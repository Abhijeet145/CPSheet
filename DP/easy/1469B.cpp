#include<bits/stdc++.h>
using namespace std;
//Type Names
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<vi> vvi;

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
ll ans;
//this was the dp solution
// void util(int i,int j,vi &a,vi &b, ll curr,vvi &dp){
//     if(i==a.size() && j==b.size()){//if we have moved till end in both just return
//         ans = max(ans,curr);
//         return;
//     } 
//     ans = max(ans,curr);
//     if(dp[i][j] != -1) 
//         return;
//     //we have two options
//     //either move one index in a or move 1 index in b
//     if(i<a.size())
//         util(i+1,j,a,b,curr+a[i],dp);
//     if(j<b.size())
//         util(i,j+1,a,b,curr+b[j],dp);

//     dp[i][j] = 1;
// }


void solve(ll tc)
{
    //start coding here
    int n,m;
    cin >> n;
    int maxa=0,maxb=0;
    vi a(n);
    f0tn{
        cin >> a[i];
        if(i>0)
            a[i] += a[i-1];
        maxa = max(maxa , a[i]);
    }
    cin >> m;
    vi b(m);
    FOR(i,0,m){
        cin >> b[i];
        if(i>0)
            b[i] += b[i-1];
        maxb = max(maxb , b[i]);
    }

    ans = maxa + maxb;
    //vvi dp(n+1,vi(m+1,-1));
    //util(0,0,a,b,0,dp);
    
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