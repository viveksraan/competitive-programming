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

ll zero = 0;
ll nb, ns, nc;
ll rb, rs, rc;
ll pb, ps, pc;
string str;
ll rubbles;

bool isPos(ll mid){
    ll temp_rubbles = rubbles;
    ll totb = mid*rb, tots = mid*rs, totc = mid*rc;
    totb-=nb, tots-=ns, totc-=nc;
    temp_rubbles -= (pb*max(zero, totb)+ps*max(zero, tots)+pc*max(zero, totc));
    // if(mid==1)
        // cout << "rubbles are " << rubbles << '\n';
    return temp_rubbles>=0;
}

void result()
    {
        cin >> str;
        cin >> nb >> ns >> nc;
        cin >> pb >> ps >> pc;
        cin >> rubbles;
        for(int i = 0; i<str.size(); i++){
            if(str[i]=='B')
                rb++;
            if(str[i]=='S')
                rs++;
            if(str[i]=='C')
                rc++;
        }

        ll l = 0, mid;
        ll h = 1e14;
        while(l<h){
            mid = (l+h+1)/2;
            // cout << " l is " << l << " m is " << mid  << " h is " << h << '\n';
            if(isPos(mid))
                l=mid;
            else
                h=mid-1;
        }
    cout << l << "\n";
    }
    
int main(){
    result();
    return 0;
}