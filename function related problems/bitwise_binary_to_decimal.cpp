#include<iostream>
#include<math.h>

using namespace std;


int bitwiseMethod(int n){
    int power=0 , decimal;

    while(n>0){
        int bit = (n&1);

        decimal += bit*(1<<power++);

        n = n/10;
        
    }

    return decimal;
}

int main(){

    int num;
    cin>>num;

    // int decimal = binaryToDecimal(num);

    // cout<<"Decimal is : "<<decimal<<"\n";
    cout<<"Decimal is : "<<bitwiseMethod(num)<<"\n";
}



