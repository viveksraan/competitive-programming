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

bool binSearch(ll start, ll end, ll searchElement){
    ll mid = (end+start)/2;
    // cout << start << " start  mid  " << mid << "  end " << end << '\n';
    if(start>end){
        // cout << "falsy" << '\n';
        return false;
    }
    if(v[mid]>searchElement)
       return binSearch(start, mid-1, searchElement);
    else if(v[mid]<searchElement)
       return binSearch(mid+1, end, searchElement);
    return true;
}

void result()
    {
     ll n, k;
    cin >> n; 
    cin >> k;
    v.resize(n);
    for(auto& a : v){
        cin >> a;
    }
    sort(v.begin(), v.end());
    ll searchElement;
    
    for(int i = 0; i<k; i++){
        cin >> searchElement;
        if(binSearch(0, n-1, searchElement))
            cout << "YES\n";
        else
            cout << "NO\n";
    } 
    // cout << res << endl;
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