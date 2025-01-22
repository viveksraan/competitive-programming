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
        ll n, x, temp;
        cin >> n >> x;
        ll ansi=-1, ansj=-1;
        vector<pair<ll, ll>> nums;  
        for(ll i=0; i<n; i++){
            cin >> temp;
            nums.emplace_back(temp, i+1);

        }
        sort(nums.begin(), nums.end());
        ll i=0, j=n-1;
        while(i<j){
            if(nums[i].first+nums[j].first==x){
                ansi = nums[i].second, ansj = nums[j].second;
                break;
            }
            else if(nums[i].first+nums[j].first<x)
                i++;
            else if(nums[i].first+nums[j].first>x)
                j--;
        }
        // cout << ansi << "is the value of ans i \n";
        if(ansi==-1)
            cout << "IMPOSSIBLE\n";
        else
            cout << ansi << " " << ansj << '\n';
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