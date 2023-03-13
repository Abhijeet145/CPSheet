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
#define f0tn for(int i=0;i<n;i++)



////////////////////////Template ends////////////////////////

int nb,ns,nc,pb,ps,pc,br,sr,cr;
ll rubel;
bool isPossible(ll mid){
    ll curr = rubel;
    if(br*mid - nb >0) curr -= (br*mid-nb)*pb;
    if(sr*mid - ns >0) curr -= (sr*mid-ns)*ps;
    if(cr*mid - nc >0) curr -= (cr*mid-nc)*pc;
    return curr >= 0;
}
void solve(ll tc)
{
    //start coding here
    string r;
    cin >> r;
    br=0;
    sr=0;
    cr=0;
    for(auto x:r){
        if(x=='B') br++;
        else if(x=='S') sr++;
        else cr++;
    }
    
    cin >> nb >> ns >>nc >>pb >> ps >>pc >> rubel;
    ll l = 0,h=1e14+1;
    ll ans;
    while(l<=h){
        ll mid = l + (h-l)/2;
        if(isPossible(mid)){
            ans = mid;
            l = mid + 1;
        } else {
            h = mid - 1;
        }
    }
    cout << ans <<"\n";
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