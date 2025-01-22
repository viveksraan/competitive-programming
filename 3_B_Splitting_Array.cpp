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
vector<ll> nums(MAX_SIZE);

bool isPos(ll mid){
    ll tot = 0, instances=1;
    for(ll i=0; i<n; i++){
        if(tot+nums[i]<=mid){
            tot+=nums[i];
        }
        else{
            tot=nums[i];
            instances++;
        }
    }
    return instances<=k; 
}

void result()
    {
        cin >> n >> k;
        nums.resize(n);
        ll l = 1, h = 1e15, mid;
        for(auto &i : nums){
            cin >> i;
            l = max(l, i);
        }
        // cout << "l is " << l << '\n';
        while(l<h){
            mid = l+(h-l)/2;
            if(isPos(mid)){
                h = mid;
            }
            else{
                l = mid+1;
            }
        }
        cout << l << "\n";
    }

int main(){
    result();
    return 0;
}