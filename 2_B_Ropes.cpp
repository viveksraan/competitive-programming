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

vector<ll> v(MAX_SIZE);
ll n;
ll k;
double absolute = 0.00000001;

bool isPos(double ans){
    ll pos = 0;
    for(ll i=0; i<n; i++){
        pos+=static_cast<long long int>(v[i]/ans);
    }
    return pos>=k;
}


void result()
    {
    cin >> n >> k;
    v.resize(n);
    double l = 0.00000001, r = 1e7;
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    ll upto = 600;
    double ans;
    while(upto--){
        ans = (l+r)/2;
        // cout << l << " is l  and then mid is " << ans << " and finally h is " << r << "\n";
        if(isPos(ans))
            l=ans;
        else
            r=ans-absolute;
    }
    cout << setprecision(7);
    cout << ans << "\n";
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