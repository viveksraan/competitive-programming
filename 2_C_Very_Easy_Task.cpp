#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
# define ll long long
# define ull unsigned long long
# define descending greater<ll> ()
# define Sort(c) sort(c.begin(), c.end()) 
# define RevSort(v) sort(v.begin(), v.end(), greater<ll>())
#define vll vector<ll> 
#define vull vector<ull>
# define MAX_SIZE 10000
# define fl(i, N) for(ll i=0; i<N; i++)
# define fl1(i, N) for(ll i=1; i<=N; i++)
# define endl '\n'

// vector<ll> v(MAX_SIZE);
ll n;
ll x;
ll y;

bool isPos(ll ans){
    ll prints = (ans/min(x, y)+ (ans-min(x,y))/max(x,y));
    // if(prints>=n){
    // cout << " answer is " << ans << '\n';
    // cout << ans/min(x, y) << " " << (ans-min(x,y))/max(x,y) << " " << prints <<  '\n'; 
    // }
    return prints>=n;
}


void result()
    {
    cin >> n >> x >> y;
    // v.resize(n);
    ll l = 1, h=2e9;
    ll mid;
    while(l<h){
        mid = (l+h)/2;
        // cout << " low is " << l << " mid is " << mid << " high is " << h << '\n';
        if(isPos(mid))
            h = mid;
        else
            l = mid+1;        
    }
    
    // cout << " low is " << l << " mid is " << mid << " high is " << h << '\n';
    cout << l << "\n";
    }
    
int main(){
    // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll t;
    // cin >>t;
    // while(t--){
        result();
    // }
    return 0;
}