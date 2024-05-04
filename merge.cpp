#include <iostream>
#include <vector>
using namespace std;

#define ll long long
#define pb(a) push_back(a)
#define vl vector<ll>
#define vi vector<int>
#define nl "\n"
template <typename T>void see(T& arg){cin>>arg;}
template <typename T>void put(T&& arg){cout<<arg<<" ";}
template <typename T, typename... Args>void see(T& arg, Args&... args){cin>>arg;see(args...);}
template <typename T, typename... Args>void puts(T&& arg ,Args&&... args){cout<<arg<<" ";put(args...);}
template <typename T, typename... Args>void putl(T&& arg ,Args&&... args){cout<<arg<<nl;put(args...);}

void merge(vl& v, int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    vl L,R;
    for(int i = 0; i < n1 ; i++){L.pb(v[l + i]);}
    for(int i = 0; i < n2 ; i++){R.pb(v[m + 1 + i]);}
    int i = 0, j = 0, k = l;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]){
            v[k++] = L[i++];
        }else{
            v[k++] = R[j++];
        }
    }
    while(i < n1){v[k++] = L[i++];}
    while(j < n2){v[k++] = R[j++];}
}
void mergeSort(vl& v, int l, int r){
    if(l<r){
        int m = l + ( r - l ) / 2;
        mergeSort(v,l,m);
        mergeSort(v,m+1,r);
        merge(v,l,m,r);
    }
}
void print(vl &v, int s){
    for(int i = 0 ; i < s ; i++){
        put(v[i]);
    }
}
int main(){
    int n;
    see(n);
    vl v;
    for(int i = 0; i < n ; i++){
        ll a =  rand() % 100;
        v.pb(a);
    }
    mergeSort(v,0,n-1);
    print(v,n);

}