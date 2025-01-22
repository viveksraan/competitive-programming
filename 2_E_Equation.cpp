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

long double c;

bool isLess(long double mid){
    return (mid*mid)+sqrt(mid)<=c;
}

void result()
    {
    cin >> c;
    long double l = 0.000005;          
    long double h = 1e13;          
    long double mid;
    ll count = 1000;
    while(count--){
        mid = (l+h)/2;
        // cout << " low is " << l << " mid is " << mid << " high is " << h << '\n';
        if(isLess(mid))
            l = mid+0.0000000000001;
        else
            h = mid-0.0000000000001;        
    }
    cout << setprecision(8);
    cout << l << "\n";
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