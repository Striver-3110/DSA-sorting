#include <iostream>
#include <vector>
#include <algorithm>
#include <time.h>

using namespace std;

#define ll long long
#define lop(i,a,n) for(long long int i = a ; i < n; i++)
#define vl vector<ll>
#define pb(a) push_back(a)

template <typename T>
void see(T &args) {
    cin >> args;
}
template <typename T>
void put(T&& args){
cout<<args<<" ";
}

void shellsort(vl& v, int n){
    int gap = n/2;
    while(gap != 0){
        int j,i;
        for(j = gap, i = 0 ; j < n ; i++,j++ ){
            bool swp = false;
            if(v[i] > v[j]){
                swap(v[i],v[j]);
                swp = true;
            }
            if(i >= gap && swp){
                int t = i;
                while(t-gap >= 0){
                    if(v[t] < v[t-gap]){
                        swap(v[t],v[t-gap]);
                    }
                    else{
                        break;
                    }
                    t -= gap;
                }
            }
        }
    gap/=2;
    }
}

void print(vl v, int n){
    put("the sorted array is: ");
    lop(i,0,n){
        put(v[i]);
    }
    cout<<endl;
}

int main(){
    ll n;
    see(n);
    vl v;
    lop(i,0,n){
        ll a;
        a = rand()%10000000;
        v.pb(a);
    }
    clock_t t,st,ed,tc;
    st = clock();
    cout<<"the starting time is: "<< (double)st/CLOCKS_PER_SEC<<endl;
    shellSort(v,n);
    ed = clock();
    cout<<"the starting time is: "<< (double)ed/CLOCKS_PER_SEC<<endl;
    cout<<"total time taken by the algo is: "<<(double)(ed-st)/CLOCKS_PER_SEC<<endl;
    // print(v,n);
}