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
        ll n, m, temp; 
        cin >> n >> m;
        ll ans = 1;
        vector<ll> values(n+1);
        vector<ll> indexes(n+1);
        for(ll i=1; i<=n; i++){
            cin >> values[i];
            indexes[values[i]] = i;
        }
        for(ll i=2; i<=n; i++){
            if(indexes[i]<indexes[i-1])
                ans++;
        }
        ll first, second;
        ll firstInd, secondInd;
        for(ll i=0; i<m; i++){
            cin >> firstInd >> secondInd ;
            first = values[firstInd];
            second = values[secondInd];
            if(first!=1 && first-1!=second && indexes[first]<indexes[first-1])
                ans--;
            if(first!=n && first+1!=second && indexes[first]>indexes[first+1])
                ans--;
            if(second!=1 && indexes[second]<indexes[second-1])
                ans--;
            if(second!=n && indexes[second]>indexes[second+1])
                ans--;

            swap(indexes[first], indexes[second]);
            swap(values[firstInd], values[secondInd]);

            if(first!=1 && first-1!=second && indexes[first]<indexes[first-1])
                ans++;
            if(first!=n && first+1!=second && indexes[first]>indexes[first+1])
                ans++;
            if(second!=1 && indexes[second]<indexes[second-1])
                ans++;
            if(second!=n && indexes[second]>indexes[second+1])
                ans++;
            cout << ans << '\n';
        }
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