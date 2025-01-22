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

ll n;
vector<ll> v(MAX_SIZE);

void result()
    {
     ll k;
    cin >> n; 
    v.resize(n);
    for(auto& a : v){
        cin >> a;
    }
    sort(v.begin(), v.end());
    cin >> k;
    ll start, end;
    for(int i = 0; i<k; i++){
        cin >> start >> end;
        auto it1 = lower_bound(v.begin(), v.end(), start);
        auto it2 = upper_bound(v.begin(), v.end(), end);
        it2--;
        cout << it2-it1+1 << endl;    
    } 
    }
    
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    result();
    return 0;
}