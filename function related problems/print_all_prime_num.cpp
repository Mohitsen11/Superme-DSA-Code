#include<iostream>

using namespace std;

bool isPrime(int num){

    if( num == 1 || num ==0 ){
        return 0;
    }
    int i;

    for(i=2; i<num; i++){
        if( num%i == 0){
            return 0; // return false
        }
    }

    return 1; // return true
}

int main(){

    int num;
    cin>>num;

    for(int i=1; i<=num; i++){
        if(isPrime(i)){
        cout<<i<<" ";
    }

    }
    return 0;
}