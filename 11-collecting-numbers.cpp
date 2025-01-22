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
        ll n, temp; 
        cin >> n;
        ll ans = 1;
        vector<ll> v(n+1);
        for(ll i=1; i<=n; i++){
            cin >> temp;
            v[temp]=i;
        }
        for(ll i=2; i<=n; i++){
            if(v[i]<v[i-1])
                ans++;
        }
        cout << ans << '\n';
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