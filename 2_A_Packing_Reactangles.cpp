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
# define MAX_SIZE 100001
# define fl(i, N) for(ll i=0; i<N; i++)
# define fl1(i, N) for(ll i=1; i<=N; i++)
# define endl '\n'

vector<ll> v(MAX_SIZE);
ll h, w, n;


bool isPos(ll ans){
    ll maxRect = ans/w;
    maxRect *= (ans/h);
    return (maxRect>=n);
}

ll binSearch(ll l, ll r){
    if(l==r)
        return l;
    
    ll mid = (l+r)/2;
    // cout << start << " start  mid  " << mid << "  end " << end << '\n';
    
    if(isPos(mid)){
        return binSearch(l, mid);
    }
    if(!isPos(mid)){
        return binSearch(mid+1, r);
    }

}

void result()
    {
    cin >> h >> w;
    cin >> n; 
    ll l = 1, r = 1;
    while(!isPos(r))
        r*=2;

    cout << binSearch(l, r) << '\n';
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