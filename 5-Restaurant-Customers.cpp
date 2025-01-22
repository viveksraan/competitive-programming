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


void result()
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);  
        vector<ll> dep(n);
        for(ll i = 0; i<n; i++){
            cin >> arr[i] >> dep[i];
        }  
        sort(arr.begin(), arr.end());
        sort(dep.begin(), dep.end());
        ll sub = 0;
        ll maxCustomer = 0;
        for(ll i = 0; i<n; i++){
            auto it = upper_bound(arr.begin(), arr.end(), dep[i]);
            it--;
            maxCustomer = max(maxCustomer, it-arr.begin()+1-sub);
            sub++;
        }
        cout << maxCustomer << '\n';
    }
    
int main(){
    // ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    // ll t;
    // cin >>t;
    // while(t--){
        result();
    // }
    return 0;
}