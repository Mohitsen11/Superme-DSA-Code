#include<iostream>
#include<math.h>

using namespace std;

void printDigit(int num){

    int sum = 0 , remainder;

    while(num != 0){
        remainder = num%10;

        sum = sum*10 + remainder;

        num/=10;
    }

    cout<<"Reversed number is : "<<sum<<"\n";
}

int main(){

    int num;
    cin>>num;

    printDigit(num);

    return 0;
}