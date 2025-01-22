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

string p;
string t;
vector<ll> a(MAX_SIZE);

bool isPos(ll mid){
    string t2 = t;
    for(ll i=0; i<mid; i++){
        t2[a[i]-1]='0';
    }
    // if(mid==2)
        // cout << mid << " " << t2 << " " << p << '\n';
    bool pos = false;
    int j = 0;
    for(int i = 0; i<p.size(); i++){
        pos=false;
        while(j<t2.size()){
            if(p[i]==t2[j++]){
                // if(mid==2)
                    // cout << "hey\n"; 
                pos=true;
                break;
            }
        }
        if(pos==false)
            return pos;
    }
    if(pos==false)
            return pos;
    return true;
}

void result()
    {
        cin >> t;
        cin >> p;
        a.resize(t.size());
        for(auto& i : a){
            cin >> i;
        }
        ll l = 0, mid;
        ll h = a.size();
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