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
        vector<pair<ll, ll>> movie(n);  
        for(ll i = 0; i<n; i++){
            cin >> movie[i].first >> movie[i].second;
            // movie[i].first = 1;
            // movie[i].second = 1000000000;
        }  
        sort(movie.begin(), movie.end(), [](const pair<ll, ll>& a, const pair<ll, ll>& b){
            return a.second<b.second;
        });
        ll binge = 0;
        ll busyBefore = 0;
        for(ll i = 0; i<n; i++){
            if(movie[i].first>=busyBefore){
                binge++;
                busyBefore = movie[i].second;
            }
        }
        cout << binge << '\n';
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