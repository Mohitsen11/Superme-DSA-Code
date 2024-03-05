#include<iostream>

using namespace std;

int setKthBit(int n , int k){

    int mask = 1 << k;

    int res = n | mask;

    return res;
}

int main(){

    int num , k;

    cin>>num>>k;

    int value = setKthBit(num,k);

    cout<<"Value after setting kth bit : "<<value<<"\n";

    return 0;
}