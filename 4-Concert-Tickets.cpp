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
        ll t, c, temp;
        cin >> t >> c;
        multiset<ll> tt;
        vector<ll> cc(c);
        vector<ll> ans(c);
        for(ll i=0; i<t; i++){
            cin >> temp;
            tt.insert(temp);
        }

        for(auto& i : cc)
            cin >> i;
        // sort(tt.begin(), tt.end());
        // sort(cc.begin(), cc.end());
        for(ll i=0; i<c; i++){
            if(tt.size()==0){
                ans[i]=-1;
                continue;
            }
            auto it = tt.lower_bound(cc[i]);
            if(it==tt.begin() && *it>cc[i]){
                    ans[i] = -1;
                    continue;
                }
            if(it==tt.end() || *it>cc[i])
                    it--;
            ans[i] = *it;
            tt.erase(it);
        }
        for(ll i=0; i<c; i++)
                cout << ans[i] << '\n';
        // cout << '\n';
        // for(ll i=0; i<t; i++)
        //     cout << tt[i] << ' ';
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