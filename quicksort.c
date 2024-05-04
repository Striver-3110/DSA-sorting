// #include<stdio.h>
// #include<string.h>
// #include<limits.h>

// #define cin_(a) scanf("%ld",&a)
// #define cout_(a) printf("%ld ",a)
// #define min(a,b) ((a>b)? b : a)
// #define endl  printf("\n")
// #define ll long long int

// void swapLL(ll *a, ll *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// ll partition(ll arr[], ll l, ll u){
//     ll pivot = arr[l];
//     ll s = l;
//     ll e = u;
//     while(l < u){
//         while(arr[s] < pivot)s++;
//         while(arr[e] >= pivot)e--;
//         swapLL(&arr[s],&arr[e]);
//     }
//     swapLL(&arr[l],&arr[e]);
//     return e;
// }

// ll quickSort(ll arr[], ll l, ll u){
//     if(l<u){
//         ll part = partition(arr,l,u);
//         quickSort(arr, l, part-1);
//         quickSort(arr, part+1, u);
//     }
// }

// int main(){
//     ll arr[100];
//     ll n;
//     cin_(n);
//     for(int i = 0 ; i < n ; i++){
//         // cin_(arr[i]);
//         scanf("%ld",&arr[i]);
//     }
//     quickSort(arr, 0, n-1);
//     for(int i = 0 ; i < n ; i++){
//         cout_(arr[i]);
//     }
// }

#include<stdio.h>
#include<stdlib.h>

#define cin_(a) scanf("%lld",&a)
#define cout_(a) printf("%lld ",a)
#define ll long long int

void swapLL(ll *a, ll *b){
    ll temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

ll partition(ll arr[], ll l, ll u){
    ll pivot = arr[l];
    ll s = l;
    ll e = u;
    while(s < e){
        while(arr[s] < pivot) s++; // marked = here... which will lead to infinite loop
        while(arr[e] >= pivot) e--;
        if (s < e) {
            swapLL(&arr[s], &arr[e]);
        }
    }
    swapLL(&arr[l], &arr[e]);
    return e;
}

void quickSort(ll arr[], ll l, ll u){
    if(l < u){
        ll part = partition(arr, l, u);
        quickSort(arr, l, part-1);
        quickSort(arr, part+1, u);
    }
}

int main(){
    ll arr[100];
    ll n;
    cin_(n);
    for(int i = 0 ; i < n ; i++){
        // cin_(arr[i]);
        arr[i] = (ll)rand()%100;
    }
    quickSort(arr, 0, n-1);

    for(int i = 0 ; i < n ; i++){
        cout_(arr[i]);
    }
    printf("\n");
    return 0;
}
