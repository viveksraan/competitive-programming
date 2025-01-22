#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
# define ll long long int
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
ll m, n;
// ll timeAns;
vector<ll> t(MAX_SIZE);
vector<ll> z(MAX_SIZE);
vector<ll> y(MAX_SIZE);
vector<ll> ans(MAX_SIZE);


bool isPos(ll mid){
    ll bloons = 0;
    vector<ll> tempAns(n, 0);
    for(int i=0; i<t.size(); i++){
        ll interval = (t[i]*z[i]+y[i]); 
        tempAns[i] += (mid/interval)*z[i];
        ll remTime =   min(mid%interval, t[i]*z[i]);  
        tempAns[i]+= (remTime/t[i]);
        bloons+=tempAns[i];
    }
    if(bloons>=m){
        int i = 0;
        bloons = m;
        while(i<n && bloons>0){
           ans[i] = min(bloons, tempAns[i]);
            bloons -= min(bloons, tempAns[i]);
            i++;
        }
        return true;
    }
    return false;
}

void result()
    {
    cin >> m >> n;
    t.resize(n);
    z.resize(n);
    y.resize(n);
    ans.resize(n);
    ll l = 0, h=2e12;
    ll mid;
    for(int i = 0; i<n; i++){
        cin >> t[i] >> z[i] >> y[i];
        // t[i] = 1;
        // z[i] = 100;
        // y[i] = 100;
    }
    // cout << " here motherfuckers" << '\n';
    while(l<h){
        mid = (l+h)/2;
        // cout << " low is " << l << " mid is " << mid << " high is " << h << '\n';
        if(isPos(mid))
            h = mid;
        else
            l = mid+1;        
    }
    cout << l << "\n";
    for(ll i=0; i<n; i++){
        cout << ans[i] << ' ';
    }
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