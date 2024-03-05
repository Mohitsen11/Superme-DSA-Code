#include<iostream>
#include<math.h>

using namespace std;

int decimalToBinary(int n){

    int i =0 , binary =0;

    while(n > 0){
        int bit = (n & 1);

        binary += bit*pow(10 , i++);

        n = n >> 1;
    }

    return binary;
}

int main(){

    int num;
    cin>>num;

    int binary = decimalToBinary(num);

    cout<<"Binary is :"<<binary<<"\n";

    return 0;
}