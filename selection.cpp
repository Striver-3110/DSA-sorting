#include <iostream>
#include <vector>
using namespace std;



#define ll long long
#define pb(a) push_back(a)
#define vl vector<ll>
#define vi vector<int>
#define nl "\n"
template <typename T>
void see(T& arg){
    cin>>arg;
}

template <typename T>
void putl(T&& arg){
    cout<<arg<<" ";
}

template <typename T, typename... Args>
void see(T& arg, Args&... args){
    cin>>arg;
    see(args...);
}

template <typename T, typename... Args>
void puts(T&& arg ,Args&&... args){
    cout<<arg<<" ";
    put(args...);
}

template <typename T, typename... Args>
void putl(T&& arg ,Args&&... args){
    cout<<arg<<nl;
    put(args...);
}

void swapi(ll* a, ll* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int n;
    cin>>n;
    vl v;
    for(int i = 0; i < n ; i++){
        ll a;
        see(a);
        v.pb(a);
    }
    for(int i = 0 ;i < n-1 ;i++){
        int min_i = i;
        for(int j = i+1; j < n; j++){
            if(v[min_i]>v[j])
            min_i = j;
        }
        if(min_i != i)
            swapi(&v[min_i],&v[i]);
    }
    // std:: vi :: iterator it = v.begin();
    for(auto it = v.begin(); it!= v.end(); it++){
        cout<<*it<<" ";
    }

}