#include<iostream>
using namespace std;

int main(){
    long long m;
    cin>>m;
    for(int i = 0 ; i < m ; i++){
        long long a = rand()%10000;
        cout<<a<<" ";
    }
}