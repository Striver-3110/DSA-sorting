#include <iostream>
#include <vector>
#include <time.h>
using namespace std;
#define ll long long
#define pb(a) push_back(a)
#define vl vector<ll>
#define vi vector<int>
#define nl "\n"
template <typename T> void see(T& arg){cin>>arg;}
template <typename T> void putl(T&& arg){cout<<arg<<" ";}
template <typename T, typename... Args> void see(T& arg, Args&... args){cin>>arg;see(args...);}
template <typename T, typename... Args>void puts(T&& arg ,Args&&... args){cout<<arg<<" ";put(args...);}
template <typename T, typename... Args>void putl(T&& arg ,Args&&... args){
    cout<<arg<<nl;put(args...);
}
int main(){
    ll n;cin>>n;vl v;
    for(ll i = 0; i < n ; i++){
        ll a; a = rand()%10; v.pb(a);
    }
    clock_t t,st,ed,tc; st = clock();
    cout<<"the starting time is: "<< (double)st/CLOCKS_PER_SEC<<endl;
    for(ll i = 1 ; i < n; i++){ // as initially 0th element is considered to be sorted
        ll temp = v[i];
        ll k = i-1;
        while(k>=0 && v[k] >= temp){
            v[k+1] = v[k];k--;
        }v[k+1] = temp;
    }
    for(int i = 0; i < n ; i++)cout<<v[i]<<" ";ed = clock();
    cout<<"the starting time is: "<< (double)ed/CLOCKS_PER_SEC;
    cout<<"total time taken by the algo is: "<<(double)(ed-st)/CLOCKS_PER_SEC<<endl;
}