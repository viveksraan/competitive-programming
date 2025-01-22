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

ll n, k;
vector<ll> stalls(MAX_SIZE);

bool isPos(ll mid){
    ll tillNow = 0;
    ll cows = 1;
    for(ll i=1; i<n; i++){
        tillNow+=(stalls[i]-stalls[i-1]);
        if(tillNow>=mid){
            cows++;
            tillNow=0;
        }
    }
    return cows>=k;
}

void result()
    {
        cin >> n >> k;
        stalls.resize(n);
        ll l = 1, h = 1e10, mid;
        for(auto &i : stalls){
            cin >> i;
        }
        // cout << "l is " << l << '\n';
        while(l<h){
            mid = l+(h-l+1)/2;
            if(isPos(mid)){
                l = mid;
            }
            else{
                h = mid-1;
            }
        }
        cout << l << "\n";
    }

int main(){
    result();
    return 0;
}
