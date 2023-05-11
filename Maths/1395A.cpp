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


bool check(int a,int b,int c,int d){
    if(a%2 + b%2 + c%2 + d%2 > 1)
    return false;
    return true;
}

void solve(ll tc)
{
    //start coding here
    ll r,g,b,w;
    cin >> r >> g >> b >> w;
    string ans = "No";
    if(check(r,g,b,w) || (r>0 && g>0 && b>0 && check(r-1,g-1,b-1,w+1)))
        ans = "Yes";
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