#include<iostream>
#include<math.h>

using namespace std;

int decimalToBinary(int num){

    int binary = 0 , i =0;

    while(num != 0){
        int bit = num%2;

        binary+= bit*pow(10 , i++);

        num/=2;
    }

    return binary;
}

int main(){
    int num;
    cin>>num;

    int binaryNumber = decimalToBinary(num);

    cout<<"Binary is : "<<binaryNumber<<"\n";

    return 0;
}