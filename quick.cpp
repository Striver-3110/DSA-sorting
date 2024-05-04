#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb(a) push_back(a);
void swap(ll *a, ll *b){ll temp = *a;*a = *b; *b = temp;}
int partition(vector<ll>& v, int s, int e){
    int lb = s;int ub = e;
    ll pivot = v[s];
    while(lb < ub){
        while(v[lb] <= pivot){lb++;}
        while(v[ub] > pivot){ub--;}
        if(lb < ub) swap(&v[lb], &v[ub]);
    }
    swap(v[s],v[ub]);
        return ub;
}
void quickSort(vector<ll>& v, int s, int e){
    if(s < e){
        int m = partition(v, s, e);
        quickSort(v, s, m - 1);
        quickSort(v, m + 1, e);
    }
}
int main(){
    int n;cin>>n;vector<ll> v;
    for(int i = 0; i < n; i++){
        ll temp = rand() % 100000;
        v.push_back(temp);
    }
    clock_t st, ed;
    st = clock();
    quickSort(v,0,n-1);
    ed = clock();
    printf("\ntime taken is: %f seconds\n", (double)(ed - st) / CLOCKS_PER_SEC);
}