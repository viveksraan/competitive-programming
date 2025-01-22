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
        ll n, fin_ans = -1e11;
        cin >> n;
        vector<ll> v(n+1);
        vector<ll> ans(n+1, -1e10);
        for(ll i=1; i<=n; i++)
            cin >> v[i];
        ll bestSum = -1e10;
        for(ll i=1; i<=n; i++){
            ans[i] = max(ans[i-1]+v[i],  v[i]);
            fin_ans = max(ans[i], fin_ans); 
        }
        cout << fin_ans << '\n';
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