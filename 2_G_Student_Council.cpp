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

ll k, n;
vector<ll> a(MAX_SIZE);

bool isPos(ll mid){
    ll tot = 0; 
    for (ll i=0; i<n; i++){
        tot+=min(a[i], mid);
    }
    return tot/k>=mid;

}

void result()
    {
        cin >> k;
        cin >> n;
        a.resize(n);
        for(auto& i : a){
            cin >> i;
        }

        ll l = 0, mid;
        ll h = 1e12;
        while(l<h){
            mid = (l+h+1)/2;
            // cout << " l is " << l << " m is " << mid  << " h is " << h << '\n';
            if(isPos(mid))
                l=mid;
            else
                h=mid-1;
        }
    cout << l << "\n";
    }
    
int main(){
    result();
    return 0;
}