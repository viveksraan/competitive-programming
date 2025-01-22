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
     ll n, m, k, ans=0;
    cin >> n >> m >> k;
    vector<ll> d_size(n);
    vector<ll> a_size(m);
    for(int i = 0; i<n; i++){
        cin >> d_size[i];
    }
    for(int i = 0; i<m; i++){
        cin >> a_size[i];
    }
    sort(a_size.begin(), a_size.end());
    sort(d_size.begin(), d_size.end());
    // for(auto it : a_size)
    //     cout << it << ' ';
    // cout << '\n';
    // for(auto it : d_size)
    //     cout << it << ' ';
    // cout << '\n';
    ll i = 0, j = 0;
    while(i<n && j<m){
            if(abs(d_size[i]-a_size[j])<=k){
                // cout << "the desired size is " << d_size[i]  << " and index is " << i << '\n';
                // cout << "size of the apartment is " << a_size[j] << " and index is " <<  j << '\n';
                // cout << "absolute value is " << abs(d_size[i]-a_size[j]) << '\n';
                ans++, j++, i++;
            }
            else if((d_size[i]<a_size[j]))
                i++;
            else if((d_size[i]>a_size[j]))
                j++;
    }
    cout << ans << endl;
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