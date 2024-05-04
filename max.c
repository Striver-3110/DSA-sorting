#include<stdio.h>
#include<time.h>

int main(){

    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    int t;
    scanf("%d",&t);
    while(t--){
    int n;
    scanf("%d",&n);
    clock_t t, st,ed,tc;
    st = clock();
    scanf("%d",&n);
    int max = 0;
    for(int i = 0 ; i < n ; i++){
        int a;
        scanf("%d",&a);
        if(max< a){
            max = a;
        }
    }
    printf("\nmax is :%d",max);
    ed = clock();
     printf("\ntime taken is: %lf seconds", (double)(ed - st) / CLOCKS_PER_SEC);
    }
}