#include<iostream>
#include<math.h>

using namespace std;

//Division method 

int binaryToDecimal(int n){
    int i =0 , decimal =0;

    while(n > 0){
        int bit = n %10;

        decimal += bit*pow(2 , i++);

        n/= 10;
    }

    return decimal;
}

// bitwise method

int bitwiseMethod(int n){
    int i=0 , decimal;

    while(n>0){
        int bit = n%10;

        decimal += bit*(1<<i++);

        n = n/10;
    }

    return decimal;
}

int main(){

    int num;
    cin>>num;

    int decimal = binaryToDecimal(num);

    cout<<"Decimal is : "<<decimal<<"\n";
    cout<<"Decimal is : "<<bitwiseMethod(num)<<"\n";
}



