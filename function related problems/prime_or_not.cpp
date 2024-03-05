#include<iostream>

using namespace std;

bool isPrime(int num){

    if( num == 1 || num == 0){
        cout<<"Number is not Prime."<<"\n";
    }
    int i;

    for(i=2; i<num; i++){
        if( num%i == 0){
            return 0;
        }
    }

    return 1;
}

int main(){

    int num;
    cin>>num;

    if(isPrime(num)){
        cout<<"Number is Prime."<<"\n";
    }

    else{
        cout<<"Number is not Prime."<<"\n";
    }

    return 0;
}