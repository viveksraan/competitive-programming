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

ll n;
double ans = 1e12;
vector<double long> speed(MAX_SIZE);
vector<double long> pos(MAX_SIZE);

bool isRight(double mid){
    double maxTime = 0;
    double maxPerson;
    for(ll i=0; i<n; i++){
        double time = abs(pos[i]-mid)/speed[i];
        if(maxTime < time)
            maxTime = time, maxPerson = i;
    }
    ans = min(ans, maxTime);
    // if(mid>4.074 && mid<4.076){
    //     cout << maxPerson << " is max person and mid is " << mid << '\n';
    //     cout << speed[maxPerson] << " is his speed and his distance is " << abs(pos[maxPerson]-mid) << '\n';
    //     cout << abs(pos[maxPerson]-mid)/speed[maxPerson] << " is his time taken " << '\n';
    // }
    if(pos[maxPerson]>mid)
        return true;
    return false;
}

void result()
    {
        cin >> n;
        speed.resize(n);
        pos.resize(n);
        for(ll i = 0; i<n; i++){
            cin >> pos[i];
            cin >> speed[i];
        }
        double l = -1e10, mid;
        double h = 1e10;
        ll loop = 80;
        while(loop--){
            mid = l+((h-l)/2);
            // cout << " l is " << l << " m is " << mid  << " h is " << h << '\n';
            if(isRight(mid))
                l=mid+0.0000000000001;
            else
                h=mid-0.0000000000001;
        }

        // isRight(6);

        cout << setprecision(8);
        cout << ans << "\n";
    }

int main(){
    result();
    return 0;
}